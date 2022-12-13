#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogGridSizeZ.generated.h"

UENUM(BlueprintType)
enum class EZVolumetricFogGridSizeZ : uint8 {
    Zero,
    SixTeen = 0x10,
    ThirtyTwo = 0x20,
    SixtyFour = 0x40,
    OneHundredTwentyEight = 0x80,
    Default = 0x20,
    EZVolumetricFogGridSizeZ_MAX = 0x81,
};

