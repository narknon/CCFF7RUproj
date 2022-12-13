#pragma once
#include "CoreMinimal.h"
#include "EZAssetReplaceConditionQuality.generated.h"

UENUM(BlueprintType)
enum class EZAssetReplaceConditionQuality : uint8 {
    All,
    Low,
    Middle,
    High,
    VeryHigh,
    _Num,
    _Default = 0x0,
    EZAssetReplaceConditionQuality_MAX = 0x6,
};

