#pragma once
#include "CoreMinimal.h"
#include "EZGraphicQualityType.generated.h"

UENUM(BlueprintType)
enum class EZGraphicQualityType : uint8 {
    None,
    Low,
    Medium,
    High,
    Highest,
    Custom,
};

