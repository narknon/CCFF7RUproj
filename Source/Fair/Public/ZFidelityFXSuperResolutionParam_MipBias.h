#pragma once
#include "CoreMinimal.h"
#include "EZFidelityFXSuperResolution_MipBiasMethod.h"
#include "ZFidelityFXSuperResolutionParam_MipBias.generated.h"

USTRUCT(BlueprintType)
struct FZFidelityFXSuperResolutionParam_MipBias {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZFidelityFXSuperResolution_MipBiasMethod Method;
    
    FAIR_API FZFidelityFXSuperResolutionParam_MipBias();
};

