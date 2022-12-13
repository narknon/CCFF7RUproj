#pragma once
#include "CoreMinimal.h"
#include "ZVolumetricFogConfig.h"
#include "FairEnvironmentVolumetricFogConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentVolumetricFogConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZVolumetricFogConfig Config;
    
    FAIR_API FFairEnvironmentVolumetricFogConfig();
};

