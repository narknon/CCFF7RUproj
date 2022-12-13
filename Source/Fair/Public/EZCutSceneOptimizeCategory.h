#pragma once
#include "CoreMinimal.h"
#include "EZCutSceneOptimizeCategory.generated.h"

UENUM(BlueprintType)
enum class EZCutSceneOptimizeCategory : uint8 {
    TopPriority,
    LevelSequence,
    LowPriority,
};

