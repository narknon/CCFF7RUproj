#pragma once
#include "CoreMinimal.h"
#include "EZShareBilateralUpSampleMaskCategory.generated.h"

UENUM(BlueprintType)
enum class EZShareBilateralUpSampleMaskCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    Map,
    LowPriority,
};

