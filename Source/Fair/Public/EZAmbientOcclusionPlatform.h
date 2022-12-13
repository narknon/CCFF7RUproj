#pragma once
#include "CoreMinimal.h"
#include "EZAmbientOcclusionPlatform.generated.h"

UENUM(BlueprintType)
enum class EZAmbientOcclusionPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

