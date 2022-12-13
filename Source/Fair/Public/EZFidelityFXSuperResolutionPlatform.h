#pragma once
#include "CoreMinimal.h"
#include "EZFidelityFXSuperResolutionPlatform.generated.h"

UENUM(BlueprintType)
enum class EZFidelityFXSuperResolutionPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

