#pragma once
#include "CoreMinimal.h"
#include "ZCutSceneOptimizeConfig.h"
#include "FairCutSceneOptimizeConfig.generated.h"

USTRUCT(BlueprintType)
struct FFairCutSceneOptimizeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZCutSceneOptimizeConfig Config;
    
    FAIR_API FFairCutSceneOptimizeConfig();
};

