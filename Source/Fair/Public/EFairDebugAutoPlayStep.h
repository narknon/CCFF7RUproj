#pragma once
#include "CoreMinimal.h"
#include "EFairDebugAutoPlayStep.generated.h"

UENUM(BlueprintType)
enum class EFairDebugAutoPlayStep : uint8 {
    NONE,
    INIT,
    MOVE,
    PROFILER,
    GPU,
};

