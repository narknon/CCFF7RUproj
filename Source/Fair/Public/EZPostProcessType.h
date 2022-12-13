#pragma once
#include "CoreMinimal.h"
#include "EZPostProcessType.generated.h"

UENUM(BlueprintType)
enum class EZPostProcessType : uint8 {
    ScreenLight,
    GradationMask,
    RadialBlur,
    SimpleFade,
    NegaPosiInvert,
    TextureScrollFilter,
};

