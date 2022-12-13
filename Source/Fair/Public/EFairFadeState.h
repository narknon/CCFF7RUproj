#pragma once
#include "CoreMinimal.h"
#include "EFairFadeState.generated.h"

UENUM(BlueprintType)
enum class EFairFadeState : uint8 {
    FadeStateNone,
    FadeOutToPause,
    FadeOutToStop,
    FadeToVolume,
    EFairFadeStateMax,
};

