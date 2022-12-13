#pragma once
#include "CoreMinimal.h"
#include "EZFidelityFXSuperResolutionPlatform.h"
#include "ZFidelityFXSuperResolutionParam_MipBias.h"
#include "ZFidelityFXSuperResolutionStruct.generated.h"

USTRUCT(BlueprintType)
struct FZFidelityFXSuperResolutionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZFidelityFXSuperResolutionPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZFidelityFXSuperResolutionParam_MipBias MipBias;
    
    FAIR_API FZFidelityFXSuperResolutionStruct();
};

