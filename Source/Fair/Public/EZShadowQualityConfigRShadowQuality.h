#pragma once
#include "CoreMinimal.h"
#include "EZShadowQualityConfigRShadowQuality.generated.h"

UENUM(BlueprintType)
enum class EZShadowQualityConfigRShadowQuality : uint8 {
    Off,
    Low_Unfiltered,
    Low,
    Medium,
    High,
    Max,
    Default = 0x5,
};

