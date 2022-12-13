#pragma once
#include "CoreMinimal.h"
#include "EZMixedResolutionCategory.generated.h"

UENUM(BlueprintType)
enum class EZMixedResolutionCategory : uint8 {
    TopPriority,
    LevelSequence,
    LowPriority,
};

