#pragma once
#include "CoreMinimal.h"
#include "EZMixedResolutionPlatform.generated.h"

UENUM(BlueprintType)
enum class EZMixedResolutionPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

