#pragma once
#include "CoreMinimal.h"
#include "EFairGameCameraPreset.h"
#include "EFairMapIndex.h"
#include "Engine/DataTable.h"
#include "FairCameraMapDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraMapDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairMapIndex MapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairGameCameraPreset PresetIndex;
    
    FAIR_API FFairCameraMapDataTableRow();
};

