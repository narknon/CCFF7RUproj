#pragma once
#include "CoreMinimal.h"
#include "ZAntiAliasingConfig.h"
#include "FairEnvironmentAntiAliasingConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentAntiAliasingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZAntiAliasingConfig Config;
    
    FAIR_API FFairEnvironmentAntiAliasingConfig();
};

