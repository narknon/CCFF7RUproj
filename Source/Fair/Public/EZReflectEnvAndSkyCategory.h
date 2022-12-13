#pragma once
#include "CoreMinimal.h"
#include "EZReflectEnvAndSkyCategory.generated.h"

UENUM(BlueprintType)
enum class EZReflectEnvAndSkyCategory : uint8 {
    TopPriority,
    LevelSequence,
    Map,
    LowPriority,
};

