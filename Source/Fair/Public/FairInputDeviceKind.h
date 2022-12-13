#pragma once
#include "CoreMinimal.h"
#include "FairInputDeviceKind.generated.h"

UENUM(BlueprintType)
enum class FairInputDeviceKind : uint8 {
    Non,
    Gamepad,
    Keyboard,
    Mouse,
    Num,
};

