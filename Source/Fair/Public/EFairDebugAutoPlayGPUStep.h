#pragma once
#include "CoreMinimal.h"
#include "EFairDebugAutoPlayGPUStep.generated.h"

UENUM(BlueprintType)
enum class EFairDebugAutoPlayGPUStep : uint8 {
    None,
    Init,
    Update,
    End,
};

