#pragma once
#include "CoreMinimal.h"
#include "EFairCollisionPriorityType.generated.h"

UENUM(BlueprintType)
enum class EFairCollisionPriorityType : uint8 {
    None,
    Lowest,
    Low,
    Middle,
    High,
    Highest,
};

