#pragma once
#include "CoreMinimal.h"
#include "EFairGameCameraPreset.generated.h"

UENUM(BlueprintType)
enum class EFairGameCameraPreset : uint8 {
    Near,
    Middle,
    Far,
    Boss1,
    Boss2,
    Boss3,
    Boss4,
    Boss5,
    MiniGameWaterfall,
    GenesisAvatar,
    GenesisMateria,
    Debug,
    WutaiBoss,
    ifrit,
    Bahamut,
    NearAlpha,
    MiddleAlpha,
    FarAlpha,
    Invalid,
};

