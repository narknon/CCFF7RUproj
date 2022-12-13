#pragma once
#include "CoreMinimal.h"
#include "EZStreamingPoolLevel.generated.h"

UENUM(BlueprintType)
enum class EZStreamingPoolLevel : uint8 {
    Lowest,
    Low,
    Middle,
    High,
    Highest,
    _Num,
    Default = 0x2,
    EZStreamingPoolLevel_MAX = 0x6,
};

