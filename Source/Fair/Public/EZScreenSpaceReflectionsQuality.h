#pragma once
#include "CoreMinimal.h"
#include "EZScreenSpaceReflectionsQuality.generated.h"

UENUM(BlueprintType)
enum class EZScreenSpaceReflectionsQuality : uint8 {
    Off,
    Low,
    Medium,
    High,
    VeryHigh,
};

