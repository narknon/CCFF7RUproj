#pragma once
#include "CoreMinimal.h"
#include "FAIR_ENEMYSTAND_MODE.generated.h"

UENUM(BlueprintType)
enum class FAIR_ENEMYSTAND_MODE : uint8 {
    FAIR_ENEMYSTAND_BASIC,
    FAIR_ENEMYSTAND_LOOKING,
    FAIR_ENEMYSTAND_STOP,
    FAIR_ENEMYSTAND_NOT,
    FAIR_ENEMYSTAND_SCRIPT/* = 0xFF*/,
    FAIR_ENEMYSTAND_MAX UMETA(Hidden),
};

