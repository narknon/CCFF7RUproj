#pragma once
#include "CoreMinimal.h"
#include "ZMixedResolutionConfig.h"
#include "FairEnvironmentMixedResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentMixedResolutionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZMixedResolutionConfig Config;
    
    FAIR_API FFairEnvironmentMixedResolutionConfig();
};

