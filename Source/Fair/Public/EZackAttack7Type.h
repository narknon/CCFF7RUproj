#pragma once
#include "CoreMinimal.h"
#include "EZackAttack7Type.generated.h"

UENUM(BlueprintType)
enum class EZackAttack7Type : uint8 {
    Jump/* = 0x7037*/,
    HighJump,
    SkyPoison,
    SkySilence,
    DeathJump,
    SkyDrain/* = 0x7055*/,
};

