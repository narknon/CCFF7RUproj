#pragma once
#include "CoreMinimal.h"
#include "EZCutSceneOptimizePlatform.generated.h"

UENUM(BlueprintType)
enum class EZCutSceneOptimizePlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

