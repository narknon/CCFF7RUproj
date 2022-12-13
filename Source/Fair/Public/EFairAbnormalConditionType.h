#pragma once
#include "CoreMinimal.h"
#include "EFairAbnormalConditionType.generated.h"

UENUM(BlueprintType)
enum class EFairAbnormalConditionType : uint8 {
    POISON,
    SILENCE,
    GROGGY,
    STOP,
    DISPEL,
    ABNORMAL_CONDITION_TYPE_AMOUNT,
};

