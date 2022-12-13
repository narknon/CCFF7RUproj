#pragma once
#include "CoreMinimal.h"
#include "ZFidelityFXSuperResolutionConfig.h"
#include "FairEnvironmentFidelityFXSuperResolutionConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentFidelityFXSuperResolutionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZFidelityFXSuperResolutionConfig Config;
    
    FAIR_API FFairEnvironmentFidelityFXSuperResolutionConfig();
};

