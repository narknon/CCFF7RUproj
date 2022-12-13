#pragma once
#include "CoreMinimal.h"
#include "FairInputKeyState.generated.h"

UENUM(BlueprintType)
enum class FairInputKeyState : uint8 {
    Trigger,
    Repeat,
    Push,
    Break,
    Num,
};

