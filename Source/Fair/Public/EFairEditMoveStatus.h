#pragma once
#include "CoreMinimal.h"
#include "EFairEditMoveStatus.generated.h"

UENUM(BlueprintType)
enum class EFairEditMoveStatus : uint8 {
    Move,
    Finished,
    None,
};

