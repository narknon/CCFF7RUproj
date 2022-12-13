#pragma once
#include "CoreMinimal.h"
#include "EZAntiAliasingConfigPostProcessQuality.generated.h"

UENUM(BlueprintType)
enum class EZAntiAliasingConfigPostProcessQuality : uint8 {
    Off,
    VeryLow,
    Low,
    Medium,
    High,
    VeryHigh,
    Max,
    Default = 0x3,
};

