#pragma once
#include "CoreMinimal.h"
#include "EFairEffectOffsetType.generated.h"

UENUM(BlueprintType)
enum class EFairEffectOffsetType : uint8 {
    BAD_STATUS,
    ENDURANCE,
    INVINCIBLE,
    REGEN,
    BARRIER,
    POISON,
    STOP,
    EFFECT_OFFSET_TYPE_AMOUNT,
};

