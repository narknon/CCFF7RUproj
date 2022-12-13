#include "HoudiniPointCacheLoaderJSON.h"
#include "HoudiniPointCache.h"

#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"


FHoudiniPointCacheLoaderJSON::FHoudiniPointCacheLoaderJSON(const FString& InFilePath) :
    FHoudiniPointCacheLoaderJSONBase(InFilePath)
{

}

bool FHoudiniPointCacheLoaderJSON::LoadToAsset(UHoudiniPointCache *InAsset)
{
    const FString& InFilePath = GetFilePath();
	FScopedLoadingState ScopedLoadingState(*InFilePath);

    FString JsonString;
    if (!FFileHelper::LoadFileToString(JsonString, *InFilePath))
    {
        UE_LOG(LogHoudiniNiagara, Warning, TEXT("Failed to read file '%s'."), *InFilePath);
	    return false;
    }

    const TSharedRef<TJsonReader<>>& Reader = TJsonReaderFactory<>::Create(JsonString);

    // Attempt to deserialize the JSON file to a FJsonObject
	TSharedPtr<FJsonObject> PointCacheObject;
	if (!FJsonSerializer::Deserialize(Reader, PointCacheObject) || !PointCacheObject.IsValid())
    {
	    UE_LOG(LogHoudiniNiagara, Warning, TEXT("Failed to deserialize file '%s'."), *InFilePath);
        return false;
    }

    // Populate the header struct from 'header' JSON object
    FHoudiniPointCacheJSONHeader Header;
    if (!ReadHeader(*PointCacheObject, Header))
    {
        UE_LOG(LogHoudiniNiagara, Error, TEXT("Could not read header."));
        return false;
    }

    // Set up the Attribute and SpecialAttributeIndexes arrays in the asset,
    // expanding attributes with size > 1
    // If time was not an attribute in the file, we add it as an attribute
    // but we always set time to the frame's time, irrespective of the existence of a time
    // attribute in the file
    uint32 NumAttributesPerFileSample = Header.NumAttributeComponents;
    ParseAttributesAndInitAsset(InAsset, Header);

    // Get Age attribute index, we'll use this to ensure we sort point spawn time correctly
    int32 IDAttributeIndex = InAsset->GetAttributeAttributeIndex(EHoudiniAttributes::POINTID);
	int32 AgeAttributeIndex = InAsset->GetAttributeAttributeIndex(EHoudiniAttributes::AGE);

	// Due to the way that some of the DI functions work,
	// we expect that the point IDs start at zero, and increment as the points are spawned
	// Make sure this is the case by converting the point IDs as we read them
	int32 NextPointID = 0;
	TMap<int32, int32> HoudiniIDToNiagaraIDMap;

    // Expect cache_data key, object start, frames key
    const TSharedPtr<FJsonObject> &CacheDataObject = PointCacheObject->GetObjectField("cache_data");
    if (!CacheDataObject.IsValid())
        return false;

    const TArray<TSharedPtr<FJsonValue>> &Frames = CacheDataObject->GetArrayField("frames");

    if (Frames.Num() != Header.NumFrames)
    {
        UE_LOG(LogHoudiniNiagara, Error, TEXT("Inconsistent num_frames in header vs body: %d vs %d"), Header.NumFrames, Frames.Num());
        return false;
    }
    
    uint32 FrameStartSampleIndex = 0;
    TArray<TArray<float>> TempFrameData;
    for (const TSharedPtr<FJsonValue> &FrameEntryAsValue : Frames)
    {
        const TSharedPtr<FJsonObject> &FrameEntryObject = FrameEntryAsValue->AsObject();
        if (!FrameEntryObject.IsValid())
            return false;

        float FrameNumber = FrameEntryObject->GetNumberField("number");
        float Time = FrameEntryObject->GetNumberField("time");
        uint32 NumPointsInFrame = FrameEntryObject->GetNumberField("num_points");

        const TArray<TSharedPtr<FJsonValue>> FrameData = FrameEntryObject->GetArrayField("frame_data");

        // Ensure we have enough space in our FrameData array to read the samples for this frame
        TempFrameData.SetNum(NumPointsInFrame);
        float PreviousAge = 0.0f;
        bool bNeedToSort = false;
        uint32 SampleIndex = 0;
        for (const TSharedPtr<FJsonValue> &SampleAsValue : FrameData)
        {
            if (SampleIndex >= NumPointsInFrame)
            {
                UE_LOG(LogHoudiniNiagara, Error, TEXT("Found more samples in frame %d as specified %d"), FrameNumber, NumPointsInFrame)
                return false;
            }

            // Initialize attributes for this sample
            TempFrameData[SampleIndex].Init(0, NumAttributesPerFileSample);
            uint32 AttrIndex = 0;
            for (const TSharedPtr<FJsonValue> &AttrEntryAsValue : SampleAsValue->AsArray())
            {
                if (AttrIndex >= NumAttributesPerFileSample)
                {
                    UE_LOG(LogHoudiniNiagara, Error, TEXT("Found more attributes in frame %d, sample %d as specified %d"), FrameNumber, SampleIndex, NumAttributesPerFileSample)
                    return false;
                }

                float& Value = TempFrameData[SampleIndex][AttrIndex];
                Value = AttrEntryAsValue->AsNumber();

                if (AgeAttributeIndex != INDEX_NONE && AttrIndex == AgeAttributeIndex)
                {
                    if (SampleIndex == 0)
                    {
                        PreviousAge = Value;
                    }
                    else if (PreviousAge < Value)
                    {
                        bNeedToSort = true;
                    }
                }
                AttrIndex++;
            }

            SampleIndex++;
        }

        // Sort this frame's data by age
        if (bNeedToSort)
        {
            TempFrameData.Sort<FHoudiniPointCacheSortPredicate>(FHoudiniPointCacheSortPredicate(INDEX_NONE, AgeAttributeIndex, IDAttributeIndex));
        }

        ProcessFrame(InAsset, FrameNumber, TempFrameData, Time, FrameStartSampleIndex, NumPointsInFrame, NumAttributesPerFileSample, Header, HoudiniIDToNiagaraIDMap, NextPointID);

        FrameStartSampleIndex += NumPointsInFrame;
    }

    return true;
}

bool FHoudiniPointCacheLoaderJSON::ReadHeader(const FJsonObject &InPointCacheObject, FHoudiniPointCacheJSONHeader &OutHeader) const
{
    TSharedPtr<FJsonObject> HeaderObject = InPointCacheObject.GetObjectField("header");
    if (!HeaderObject.IsValid())
        return false;

    OutHeader.Version = HeaderObject->GetStringField("version");
    OutHeader.NumSamples = HeaderObject->GetNumberField("num_samples");
    OutHeader.NumFrames = HeaderObject->GetNumberField("num_frames");
    OutHeader.NumPoints = HeaderObject->GetNumberField("num_points");
    OutHeader.NumAttributes = HeaderObject->GetNumberField("num_attrib");

    // Preallocate Attribute arrays from NumAttributes
    OutHeader.Attributes.Empty(OutHeader.NumAttributes);
    OutHeader.AttributeSizes.Empty(OutHeader.NumAttributes);

    for (const TSharedPtr<FJsonValue> &ArrayValue : HeaderObject->GetArrayField("attrib_name"))
    {
        OutHeader.Attributes.Add(ArrayValue->AsString());
    }

    // Check that attrib_name was the expected size
    if (OutHeader.Attributes.Num() != OutHeader.NumAttributes)
    {
        UE_LOG(LogHoudiniNiagara, Error, TEXT("Header inconsistent: attrib_name array size mismatch: %d vs %d"), OutHeader.Attributes.Num(), OutHeader.NumAttributes);
        return false;
    }

    // Read attribute sizes and calculate the number of attribute components (sum of attribute size over all attributes)
    OutHeader.NumAttributeComponents = 0;
    for (const TSharedPtr<FJsonValue> &ArrayValue : HeaderObject->GetArrayField("attrib_size"))
    {
        uint8 AttrSize = ArrayValue->AsNumber();
        OutHeader.AttributeSizes.Add(AttrSize);
        OutHeader.NumAttributeComponents += AttrSize;
    }

    // Check that attrib_size was the expected size
    if (OutHeader.AttributeSizes.Num() != OutHeader.NumAttributes)
    {
        UE_LOG(LogHoudiniNiagara, Error, TEXT("Header inconsistent: attrib_size array size mismatch: %d vs %d"), OutHeader.AttributeSizes.Num(), OutHeader.NumAttributes);
        return false;
    }

    OutHeader.AttributeComponentDataTypes.Empty(OutHeader.NumAttributeComponents);

    for (const TSharedPtr<FJsonValue> &ArrayValue : HeaderObject->GetArrayField("attrib_data_type"))
    {
        const FString& DataType = ArrayValue->AsString();
        if (DataType.Len() > 0)
            OutHeader.AttributeComponentDataTypes.Add(DataType[0]);
        else
            OutHeader.AttributeComponentDataTypes.Add('\0');
    }

    // Check that attrib_data_type was the expected size
    if (OutHeader.AttributeComponentDataTypes.Num() != OutHeader.NumAttributeComponents)
    {
        UE_LOG(LogHoudiniNiagara, Error, TEXT("Header inconsistent: attrib_data_type array size mismatch: %d vs %d"), OutHeader.AttributeComponentDataTypes.Num(), OutHeader.NumAttributeComponents);
        return false;
    }

    OutHeader.DataType = HeaderObject->GetStringField("data_type");

    return true;
}
