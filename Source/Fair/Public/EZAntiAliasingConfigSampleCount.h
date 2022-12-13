#pragma once
#include "CoreMinimal.h"
#include "EZAntiAliasingConfigSampleCount.generated.h"

UENUM(BlueprintType)
enum class EZAntiAliasingConfigSampleCount : uint8 {
    Zero,
    Four = 0x4,
    Eight = 0x8,
    SixTeeen = 0x10,
    ThirtyTwo = 0x20,
    SixtyFour = 0x40,
    Default = 0x8,
    EZAntiAliasingConfigSampleCount_MAX = 0x41,
};

