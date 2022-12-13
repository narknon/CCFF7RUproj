#pragma once
#include "CoreMinimal.h"
#include "EUITipsMailFolder.generated.h"

UENUM(BlueprintType)
enum class EUITipsMailFolder : uint8 {
    Basic,
    Battle,
    Equip,
    MiniGame,
    Recommend,
    Num,
};

