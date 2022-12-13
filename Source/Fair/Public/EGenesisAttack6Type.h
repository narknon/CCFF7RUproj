#pragma once
#include "CoreMinimal.h"
#include "EGenesisAttack6Type.generated.h"

UENUM(BlueprintType)
enum class EGenesisAttack6Type : uint8 {
    MagicSword/* = 0x81C4*/,
    Homing/* = 0x8282*/,
    Flash/* = 0x8258*/,
    EGenesisAttack6Type_MAX/* = 0x8283*/,
};

