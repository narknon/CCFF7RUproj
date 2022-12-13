#pragma once
#include "CoreMinimal.h"
#include "EFairMotAimMoveMode.generated.h"

UENUM(BlueprintType)
enum class EFairMotAimMoveMode : uint8 {
    None,
    Move,
    Aim,
    Move_Aim,
};

