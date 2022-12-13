#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.generated.h"

UENUM(BlueprintType)
enum class EZPlatformHardware : uint8 {
    Any,
    WindowsPC,
    XboxOne,
    XboxOneS,
    XboxOneX,
    XboxSeriesS,
    XboxSeriesX,
    SwitchTV,
    SwitchHandheld,
    PlayStation4,
    PlayStation4Pro,
    PlayStation5,
    Unknown,
    _Num = 0xC,
};

