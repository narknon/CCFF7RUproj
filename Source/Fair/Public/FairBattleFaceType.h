#pragma once
#include "CoreMinimal.h"
#include "FairBattleFaceType.generated.h"

UENUM(BlueprintType)
enum class FairBattleFaceType : uint8 {
    Normal,
    Damage,
    Anger,
    Death,
    None,
};

