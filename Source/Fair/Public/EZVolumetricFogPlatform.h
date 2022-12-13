#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogPlatform.generated.h"

UENUM(BlueprintType)
enum class EZVolumetricFogPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

