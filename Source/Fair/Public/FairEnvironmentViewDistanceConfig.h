#pragma once
#include "CoreMinimal.h"
#include "ZViewDistanceConfig.h"
#include "FairEnvironmentViewDistanceConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentViewDistanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZViewDistanceConfig Config;
    
    FAIR_API FFairEnvironmentViewDistanceConfig();
};

