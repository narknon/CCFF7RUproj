#pragma once
#include "CoreMinimal.h"
#include "FAIR_ENEMYTURN_MOTION.generated.h"

UENUM(BlueprintType)
enum class FAIR_ENEMYTURN_MOTION : uint8 {
    FAIR_ENEMYTURN_IDLE1,
    FAIR_ENEMYTURN_IDLE2,
    FAIR_ENEMYTURN_RUN,
    FAIR_ENEMYTURN_TURN,
    FAIR_ENEMYTURN_MAX UMETA(Hidden),
};

