#pragma once
#include "CoreMinimal.h"
#include "EFairDefinitionOfSeparateTranslucencyScreenPercentage.generated.h"

UENUM(BlueprintType)
enum class EFairDefinitionOfSeparateTranslucencyScreenPercentage : uint8 {
    Default,
    Middle,
    Low,
    Num,
};

