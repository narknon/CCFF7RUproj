#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairFaceAssetDataList.h"
#include "FairLipsyncAssetDataList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairFacialAssetPathListData.generated.h"

class UFairCharaNameListToShareAnimData;

UCLASS(Blueprintable)
class FAIR_API UFairFacialAssetPathListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairFaceAssetDataList> m_FaceAssetPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairLipsyncAssetDataList> m_LipsyncAssetPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetData> m_AssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairCharaNameListToShareAnimData* m_CharaNameListToShareAnimData;
    
public:
    UFairFacialAssetPathListData();
};

