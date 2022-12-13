#pragma once
#include "CoreMinimal.h"
#include "EStatusColorType.generated.h"

UENUM(BlueprintType)
enum class EStatusColorType : uint8 {
    None,
    Poison,
    Curse,
    Endurance,
    Invincible,
};

