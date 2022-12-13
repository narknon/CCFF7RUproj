#pragma once
#include "CoreMinimal.h"
#include "EFairDebugAutoPlayAction.generated.h"

UENUM(BlueprintType)
enum class EFairDebugAutoPlayAction : uint8 {
    None,
    BattleRLeft,
    BattleRRight,
    BattleRUp,
    BattleRDown,
    BattleL1RLeft,
    BattleL1RRight,
    BattleL1RUp,
    BattleL1RDown,
    BattleL1R1,
    BattleL1R2,
    BattleL3R3,
};

