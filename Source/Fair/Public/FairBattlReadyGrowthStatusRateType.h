#pragma once
#include "CoreMinimal.h"
#include "FairBattlReadyGrowthStatusRateType.generated.h"

UENUM(BlueprintType)
enum class FairBattlReadyGrowthStatusRateType : uint8 {
    MitigationRate,
    AbilityUpRate,
    AssaultUpRate,
    Amount,
};

