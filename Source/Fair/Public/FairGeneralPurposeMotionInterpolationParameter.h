#pragma once
#include "CoreMinimal.h"
#include "FairGeneralPurposeMotionInterpolationParameter.generated.h"

USTRUCT(BlueprintType)
struct FFairGeneralPurposeMotionInterpolationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterpolatedValue;
    
    FAIR_API FFairGeneralPurposeMotionInterpolationParameter();
};

