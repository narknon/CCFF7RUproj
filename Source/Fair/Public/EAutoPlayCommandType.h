#pragma once
#include "CoreMinimal.h"
#include "EAutoPlayCommandType.generated.h"

UENUM(BlueprintType)
enum class EAutoPlayCommandType : uint8 {
    Invalid,
    NOP,
    Move,
    Action,
    Choices,
    Mission,
    Wait,
    CloseMenu,
    MissionMode,
    MiniGameDebug,
    SelectTop,
    SelectStart,
    SelectEnd,
    SelectLast,
    Num,
};

