#pragma once
#include "CoreMinimal.h"
#include "EMotEventType.generated.h"

UENUM(BlueprintType)
enum class EMotEventType : uint8 {
    NONE,
    ATTACK,
    EFFECT,
    SOUND,
    OTHER,
    PATTERN,
    EVENT,
};

