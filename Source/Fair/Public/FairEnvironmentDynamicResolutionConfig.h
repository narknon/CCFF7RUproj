#pragma once
#include "CoreMinimal.h"
#include "ZDynamicResolutionConfig.h"
#include "FairEnvironmentDynamicResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentDynamicResolutionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZDynamicResolutionConfig Config;
    
    FAIR_API FFairEnvironmentDynamicResolutionConfig();
};

