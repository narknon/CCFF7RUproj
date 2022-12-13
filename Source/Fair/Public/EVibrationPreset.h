#pragma once
#include "CoreMinimal.h"
#include "EVibrationPreset.generated.h"

UENUM(BlueprintType)
enum EVibrationPreset {
    SHORT_SS,
    SHORT_S,
    SHORT_N,
    SHORT_L,
    SHORT_XL,
    DAMAGE_NORMAL,
    DAMAGE_GUARD,
    DAMAGE_DEATH,
    VIBRATION_DMW,
    VIBRATION_ENCOUNT,
    VIBRATION_MAIL,
    VIBRATION_TREASURECHEST,
    Max,
};

