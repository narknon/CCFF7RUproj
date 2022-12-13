#pragma once
#include "CoreMinimal.h"
#include "EZViewDistancePlatform.generated.h"

UENUM(BlueprintType)
enum class EZViewDistancePlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

