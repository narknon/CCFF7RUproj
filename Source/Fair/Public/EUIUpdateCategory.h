#pragma once
#include "CoreMinimal.h"
#include "EUIUpdateCategory.generated.h"

UENUM(BlueprintType)
enum class EUIUpdateCategory : uint8 {
    Normal,
    Field,
    SaveError,
    System,
    BattleField,
    BattleOrMenu,
    Num,
};

