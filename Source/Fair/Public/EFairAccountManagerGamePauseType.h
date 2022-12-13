#pragma once
#include "CoreMinimal.h"
#include "EFairAccountManagerGamePauseType.generated.h"

UENUM(BlueprintType)
enum class EFairAccountManagerGamePauseType : uint8 {
    Invalid,
    AccountManagerFlow,
    GameState,
};

