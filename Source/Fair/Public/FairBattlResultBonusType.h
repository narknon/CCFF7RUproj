#pragma once
#include "CoreMinimal.h"
#include "FairBattlResultBonusType.generated.h"

UENUM(BlueprintType)
enum class FairBattlResultBonusType : uint8 {
    NoDamage,
    GuardAll,
    LimitFinish,
    SummonFinish,
    MagicFinish,
    SkillFinish,
    None,
};

