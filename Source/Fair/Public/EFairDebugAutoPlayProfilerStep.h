#pragma once
#include "CoreMinimal.h"
#include "EFairDebugAutoPlayProfilerStep.generated.h"

UENUM(BlueprintType)
enum class EFairDebugAutoPlayProfilerStep : uint8 {
    None,
    Init,
    Update,
    End,
};

