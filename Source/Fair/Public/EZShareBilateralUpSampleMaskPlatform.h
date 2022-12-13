#pragma once
#include "CoreMinimal.h"
#include "EZShareBilateralUpSampleMaskPlatform.generated.h"

UENUM(BlueprintType)
enum class EZShareBilateralUpSampleMaskPlatform : uint8 {
    ANY_PLATFORM,
    SWITCH,
    PS4,
    PS5,
    XB1,
    XSX,
    STEAM,
    WINDOWS,
};

