#pragma once
#include "CoreMinimal.h"
#include "EZFidelityFXSuperResolutionCategory.generated.h"

UENUM(BlueprintType)
enum class EZFidelityFXSuperResolutionCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    Map,
    LowPriority,
};

