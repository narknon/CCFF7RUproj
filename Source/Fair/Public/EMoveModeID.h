#pragma once
#include "CoreMinimal.h"
#include "EMoveModeID.generated.h"

UENUM(BlueprintType)
enum class EMoveModeID : uint8 {
    DefalutMode,
    SlowMode,
    FastMode,
};

