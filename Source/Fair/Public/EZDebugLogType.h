#pragma once
#include "CoreMinimal.h"
#include "EZDebugLogType.generated.h"

UENUM(BlueprintType)
enum class EZDebugLogType : uint8 {
    Error,
    Warning,
    Info,
    Trace,
    PspTrace,
};

