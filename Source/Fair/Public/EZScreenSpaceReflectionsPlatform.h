#pragma once
#include "CoreMinimal.h"
#include "EZScreenSpaceReflectionsPlatform.generated.h"

UENUM(BlueprintType)
enum class EZScreenSpaceReflectionsPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

