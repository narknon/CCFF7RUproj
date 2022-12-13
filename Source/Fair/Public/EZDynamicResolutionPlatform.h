#pragma once
#include "CoreMinimal.h"
#include "EZDynamicResolutionPlatform.generated.h"

UENUM(BlueprintType)
enum class EZDynamicResolutionPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    SWITCH_CONSOLE,
    SWITCH_HANDHELD,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

