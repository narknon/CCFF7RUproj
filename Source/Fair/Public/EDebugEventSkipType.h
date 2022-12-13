#pragma once
#include "CoreMinimal.h"
#include "EDebugEventSkipType.generated.h"

UENUM(BlueprintType)
enum class EDebugEventSkipType : uint8 {
    Timer,
    CameraMotion,
    EventCutCommand,
    EventParameterCommand,
    Num,
};

