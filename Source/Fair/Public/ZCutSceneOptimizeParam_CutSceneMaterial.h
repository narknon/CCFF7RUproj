#pragma once
#include "CoreMinimal.h"
#include "ZCutSceneOptimizeParam_CutSceneMaterial.generated.h"

USTRUCT(BlueprintType)
struct FZCutSceneOptimizeParam_CutSceneMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    FAIR_API FZCutSceneOptimizeParam_CutSceneMaterial();
};

