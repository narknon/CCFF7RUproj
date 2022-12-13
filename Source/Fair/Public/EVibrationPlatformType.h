#pragma once
#include "CoreMinimal.h"
#include "EVibrationPlatformType.generated.h"

UENUM()
enum class EVibrationPlatformType : int32 {
    PS,
    XBox,
    Switch,
    Others,
    PS5,
};

