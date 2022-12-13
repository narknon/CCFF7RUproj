#pragma once
#include "CoreMinimal.h"
#include "EZCutSceneOptimizePlatform.h"
#include "ZCutSceneOptimizeParam_MaskedToOpaque.h"
#include "ZCutSceneOptimizeParam_CutSceneMaterial.h"
#include "ZCutSceneOptimizeStruct.generated.h"

USTRUCT(BlueprintType)
struct FZCutSceneOptimizeStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZCutSceneOptimizePlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZCutSceneOptimizeParam_MaskedToOpaque UseDisableMaskToForceOpaque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZCutSceneOptimizeParam_CutSceneMaterial CutSceneMaterial;
    
    FAIR_API FZCutSceneOptimizeStruct();
};

