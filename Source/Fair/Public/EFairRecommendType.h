#pragma once
#include "CoreMinimal.h"
#include "EFairRecommendType.generated.h"

UENUM(BlueprintType)
enum class EFairRecommendType : uint8 {
    None,
    Materla,
    Shop,
    Summon,
    Chokobo,
    Other,
    Num,
};

