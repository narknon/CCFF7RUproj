#pragma once
#include "CoreMinimal.h"
#include "ZShareBilateralUpSampleMaskConfig.h"
#include "FairEnvironmentShareBilateralUpSampleMaskConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentShareBilateralUpSampleMaskConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZShareBilateralUpSampleMaskConfig Config;
    
    FAIR_API FFairEnvironmentShareBilateralUpSampleMaskConfig();
};

