#pragma once
#include "CoreMinimal.h"
#include "EFairRegionType.generated.h"

UENUM(BlueprintType)
enum class EFairRegionType : uint8 {
    ALL,
    JP,
    NA,
    EU,
    AS,
    JNE,
};

