#pragma once
#include "CoreMinimal.h"
#include "EFairCapsuleShadowCategory.generated.h"

UENUM(BlueprintType)
enum class EFairCapsuleShadowCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    Mission,
    Event,
    Default,
    LowPriority,
};

