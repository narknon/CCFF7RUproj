#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogPlatform.h"
#include "ZVolumetricFogElement.h"
#include "ZVolumetricFogStruct.generated.h"

USTRUCT(BlueprintType)
struct FZVolumetricFogStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZVolumetricFogPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZVolumetricFogElement Element;
    
    FAIR_API FZVolumetricFogStruct();
};

