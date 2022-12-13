#pragma once
#include "CoreMinimal.h"
#include "PlatformType.generated.h"

UENUM(BlueprintType)
enum class PlatformType : uint8 {
    NONE,
    PC,
    PS4,
    XBOX,
    Switch,
    Max,
};

