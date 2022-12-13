#pragma once
#include "CoreMinimal.h"
#include "EFairGameCameraPreset.h"
#include "EFairMapIndex.h"
#include "FairCameraMapParameter.generated.h"

USTRUCT(BlueprintType)
struct FFairCameraMapParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairMapIndex MapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairGameCameraPreset PresetIndex;
    
    FAIR_API FFairCameraMapParameter();
};

