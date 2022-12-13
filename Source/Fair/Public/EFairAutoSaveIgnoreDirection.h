#pragma once
#include "CoreMinimal.h"
#include "EFairAutoSaveIgnoreDirection.generated.h"

UENUM(BlueprintType)
enum class EFairAutoSaveIgnoreDirection : uint8 {
    Both,
    OneDirection,
    Num,
};

