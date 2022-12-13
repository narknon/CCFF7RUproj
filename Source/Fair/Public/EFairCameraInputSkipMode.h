#pragma once
#include "CoreMinimal.h"
#include "EFairCameraInputSkipMode.generated.h"

UENUM(BlueprintType)
enum class EFairCameraInputSkipMode : uint8 {
    Menu,
    Map,
    Save,
    Pause,
    GameOver,
    Tips,
    SystemMessage,
    Event,
    MiniGame,
    DMW,
    LimitBreak,
    AttentionCamera,
    LastBattle,
    Platform,
    Max,
};

