#pragma once
#include "CoreMinimal.h"
#include "EZDynamicResolutionCategory.generated.h"

UENUM(BlueprintType)
enum class EZDynamicResolutionCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    LowPriority,
};

