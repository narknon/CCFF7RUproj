#pragma once
#include "CoreMinimal.h"
#include "EZSeparateTranslucencyCategory.generated.h"

UENUM(BlueprintType)
enum class EZSeparateTranslucencyCategory : uint8 {
    TopPriority,
    MixedResolution,
    LevelSequence,
    Script,
    Map,
    LowPriority,
};

