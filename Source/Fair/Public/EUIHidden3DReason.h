#pragma once
#include "CoreMinimal.h"
#include "EUIHidden3DReason.generated.h"

UENUM(BlueprintType)
enum class EUIHidden3DReason : uint8 {
    MainMenu,
    Pause,
    Slot,
    Movie,
    BrightnessConfig,
    GameOver,
    Map,
    Num,
};

