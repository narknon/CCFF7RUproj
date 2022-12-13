#pragma once
#include "CoreMinimal.h"
#include "EZAmbientOcclusionCategory.generated.h"

UENUM(BlueprintType)
enum class EZAmbientOcclusionCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    Map,
    LowPriority,
};

