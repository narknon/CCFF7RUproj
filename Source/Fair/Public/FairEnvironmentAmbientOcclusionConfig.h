#pragma once
#include "CoreMinimal.h"
#include "ZAmbientOcclusionConfig.h"
#include "FairEnvironmentAmbientOcclusionConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentAmbientOcclusionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZAmbientOcclusionConfig Config;
    
    FAIR_API FFairEnvironmentAmbientOcclusionConfig();
};

