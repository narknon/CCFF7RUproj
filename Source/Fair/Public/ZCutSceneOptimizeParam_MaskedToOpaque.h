#pragma once
#include "CoreMinimal.h"
#include "ZCutSceneOptimizeParam_MaskedToOpaque.generated.h"

USTRUCT(BlueprintType)
struct FZCutSceneOptimizeParam_MaskedToOpaque {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Prepass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Shadow;
    
    FAIR_API FZCutSceneOptimizeParam_MaskedToOpaque();
};

