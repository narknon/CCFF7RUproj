#pragma once
#include "CoreMinimal.h"
#include "EVibrationPlatformType.h"
#include "FairVibrationMasterScaleParam.generated.h"

USTRUCT(BlueprintType)
struct FFairVibrationMasterScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EVibrationPlatformType PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftLargeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightLargeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftSmallScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightSmallScale;
    
    FAIR_API FFairVibrationMasterScaleParam();
};

