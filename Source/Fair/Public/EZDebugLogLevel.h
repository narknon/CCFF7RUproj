#pragma once
#include "CoreMinimal.h"
#include "EZDebugLogLevel.generated.h"

UENUM(BlueprintType)
enum class EZDebugLogLevel : uint8 {
    Disable,
    Error,
    Warning,
    Info,
    All,
};

