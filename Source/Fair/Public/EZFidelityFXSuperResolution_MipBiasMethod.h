#pragma once
#include "CoreMinimal.h"
#include "EZFidelityFXSuperResolution_MipBiasMethod.generated.h"

UENUM(BlueprintType)
enum class EZFidelityFXSuperResolution_MipBiasMethod : uint8 {
    DISABLED,
    AUTOMATIC,
    OFFSET,
    EZFidelityFXSuperResolution_MAX UMETA(Hidden),
};

