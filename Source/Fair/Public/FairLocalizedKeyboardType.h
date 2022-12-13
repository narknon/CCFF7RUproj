#pragma once
#include "CoreMinimal.h"
#include "FairLocalizedKeyboardType.generated.h"

UENUM(BlueprintType)
enum class FairLocalizedKeyboardType : uint8 {
    QWERTY,
    AZERTY,
    QWERTZ,
    QWERTY_J,
    QWERTY_I,
    QWERTY_S,
    Num,
};

