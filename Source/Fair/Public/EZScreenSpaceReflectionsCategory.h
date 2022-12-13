#pragma once
#include "CoreMinimal.h"
#include "EZScreenSpaceReflectionsCategory.generated.h"

UENUM(BlueprintType)
enum class EZScreenSpaceReflectionsCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    LowPriority,
};

