#pragma once
#include "CoreMinimal.h"
#include "FairInputDeviceType.generated.h"

UENUM()
enum class FairInputDeviceType : int32 {
    PS,
    XBox,
    Switch,
    Keyboard,
    Mouse,
    Num,
};

