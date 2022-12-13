#pragma once
#include "CoreMinimal.h"
#include "ETextLanguage.generated.h"

UENUM(BlueprintType)
enum class ETextLanguage : uint8 {
    Japanese,
    English,
    EnglishUK,
    French,
    Italian,
    Deutsch,
    Espanol,
    ChineseS,
    ChineseT,
    Korean,
    Num,
    Invalid,
};

