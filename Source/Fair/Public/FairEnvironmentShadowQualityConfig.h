#pragma once
#include "CoreMinimal.h"
#include "ZShadowQualityConfig.h"
#include "FairEnvironmentShadowQualityConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentShadowQualityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZShadowQualityConfig Config;
    
    FAIR_API FFairEnvironmentShadowQualityConfig();
};

