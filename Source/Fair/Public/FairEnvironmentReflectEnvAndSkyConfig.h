#pragma once
#include "CoreMinimal.h"
#include "ZReflectEnvAndSkyConfig.h"
#include "FairEnvironmentReflectEnvAndSkyConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentReflectEnvAndSkyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZReflectEnvAndSkyConfig Config;
    
    FAIR_API FFairEnvironmentReflectEnvAndSkyConfig();
};

