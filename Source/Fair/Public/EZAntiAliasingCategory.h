#pragma once
#include "CoreMinimal.h"
#include "EZAntiAliasingCategory.generated.h"

UENUM(BlueprintType)
enum class EZAntiAliasingCategory : uint8 {
    TopPriority,
    LevelSequence,
    Script,
    PlayableAuto,
    Map,
    LowPriority,
};

