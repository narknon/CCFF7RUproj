#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogGridPixelSize.generated.h"

UENUM(BlueprintType)
enum class EZVolumetricFogGridPixelSize : uint8 {
    Zero,
    Four = 0x4,
    Eight = 0x8,
    SixTeen = 0x10,
    Default = 0x8,
    EZVolumetricFogGridPixelSize_MAX = 0x11,
};

