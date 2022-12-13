#pragma once
#include "CoreMinimal.h"
#include "EFairAccountManagerPauseType.generated.h"

UENUM(BlueprintType)
enum class EFairAccountManagerPauseType : uint8 {
    Invalid,
    Loading,
    SaveLoad,
    Movie,
    Suspend,
};

