#pragma once
#include "CoreMinimal.h"
#include "EFairPauseSwitchElement.generated.h"

UENUM(BlueprintType)
enum class EFairPauseSwitchElement : uint8 {
    Empty,
    GameTaskTick,
    SoundTick,
    MovieTick,
    SoundPlaying,
    SoundInMenu,
};

