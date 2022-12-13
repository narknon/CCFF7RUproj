#pragma once
#include "CoreMinimal.h"
#include "EZReflectEnvAndSkyPlatform.generated.h"

UENUM(BlueprintType)
enum class EZReflectEnvAndSkyPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

