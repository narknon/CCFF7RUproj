#pragma once
#include "CoreMinimal.h"
#include "EFairEncountAreaShape.generated.h"

UENUM(BlueprintType)
enum class EFairEncountAreaShape : uint8 {
    None,
    Circle,
    Square,
    FourPoints,
    Num,
};

