#pragma once
#include "CoreMinimal.h"
#include "EZVolumetricFogCategory.generated.h"

UENUM(BlueprintType)
enum class EZVolumetricFogCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    Map,
    LowPriority,
};

