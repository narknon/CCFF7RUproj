#pragma once
#include "CoreMinimal.h"
#include "ESoundCategory.generated.h"

UENUM(BlueprintType)
enum class ESoundCategory : uint8 {
    none,
    Bgm = 0x0,
    Se,
    Voice,
    Env = 0xA,
};

