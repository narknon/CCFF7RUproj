#pragma once
#include "CoreMinimal.h"
#include "EStickPush.generated.h"

UENUM(BlueprintType)
enum class EStickPush : uint8 {
    Up,
    Down,
    Left,
    Right,
    Num,
};

