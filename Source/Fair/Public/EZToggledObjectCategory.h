#pragma once
#include "CoreMinimal.h"
#include "EZToggledObjectCategory.generated.h"

UENUM(BlueprintType)
enum class EZToggledObjectCategory : uint8 {
    LevelSequence,
    Script,
    Default,
};

