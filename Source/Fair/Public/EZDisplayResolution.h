#pragma once
#include "CoreMinimal.h"
#include "EZDisplayResolution.generated.h"

UENUM(BlueprintType)
enum class EZDisplayResolution : uint8 {
    DisplayResolution_720p,
    DisplayResolution_1080p,
    DisplayResolution_2160p,
    DisplayResolution_MAX UMETA(Hidden),
};

