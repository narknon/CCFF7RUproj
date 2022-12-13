#pragma once
#include "CoreMinimal.h"
#include "FairBattlReadyGrowthStatusCountType.generated.h"

UENUM(BlueprintType)
enum class FairBattlReadyGrowthStatusCountType : uint8 {
    DamageBreakCount,
    PenetrationBarrierCount,
    InvalidBarrierCount,
    Amount,
};

