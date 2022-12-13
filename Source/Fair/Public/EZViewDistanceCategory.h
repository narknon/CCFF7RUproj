#pragma once
#include "CoreMinimal.h"
#include "EZViewDistanceCategory.generated.h"

UENUM(BlueprintType)
enum class EZViewDistanceCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    Map,
    LowPriority,
};

