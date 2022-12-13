#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogGridPixelSize.h"
#include "EZVolumetricFogGridSizeZ.h"
#include "ZVolumetricFogElement.generated.h"

USTRUCT(BlueprintType)
struct FZVolumetricFogElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZVolumetricFogGridPixelSize GridPixelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZVolumetricFogGridSizeZ GridSizeZ;
    
    FAIR_API FZVolumetricFogElement();
};

