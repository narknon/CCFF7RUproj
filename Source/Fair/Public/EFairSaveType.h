#pragma once
#include "CoreMinimal.h"
#include "EFairSaveType.generated.h"

UENUM(BlueprintType)
enum class EFairSaveType : uint8 {
    Invalid,
    Progress,
    System,
    DebugProgress,
    Num,
};

