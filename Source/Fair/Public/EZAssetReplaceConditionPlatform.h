#pragma once
#include "CoreMinimal.h"
#include "EZAssetReplaceConditionPlatform.generated.h"

UENUM(BlueprintType)
enum class EZAssetReplaceConditionPlatform : uint8 {
    All,
    Switch,
    PS4,
    PS5,
    XboxOne,
    XSX,
    Steam,
    Windows,
    _Num,
    _Default = 0x1,
    EZAssetReplaceConditionPlatform_MAX = 0x9,
};

