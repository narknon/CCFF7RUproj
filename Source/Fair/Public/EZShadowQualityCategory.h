#pragma once
#include "CoreMinimal.h"
#include "EZShadowQualityCategory.generated.h"

UENUM(BlueprintType)
enum class EZShadowQualityCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    LowPriority,
};

