#pragma once
#include "CoreMinimal.h"
#include "EZPlatformType.generated.h"

UENUM(BlueprintType)
enum class EZPlatformType : uint8 {
    Any,
    Steam,
    EpicGames,
    WindowsApplication,
    XboxGamePass,
    XboxOne,
    XboxSeries,
    Switch,
    PlayStation4,
    PlayStation5,
    Unknown,
    _Num = 0xA,
};

