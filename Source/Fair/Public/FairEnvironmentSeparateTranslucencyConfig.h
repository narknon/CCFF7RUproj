#pragma once
#include "CoreMinimal.h"
#include "ZSeparateTranslucencyConfig.h"
#include "FairEnvironmentSeparateTranslucencyConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairEnvironmentSeparateTranslucencyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZSeparateTranslucencyConfig Config;
    
    FAIR_API FFairEnvironmentSeparateTranslucencyConfig();
};

