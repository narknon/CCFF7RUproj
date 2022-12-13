#pragma once
#include "CoreMinimal.h"
#include "EEventParameterTypes.generated.h"

UENUM(BlueprintType)
enum class EEventParameterTypes : uint8 {
    Light,
    Shadow,
    DOF,
    AutoExposure,
    Bloom,
    ColorGrading,
    HeadLight,
    GatherDof,
    EnvironmentConfig,
    MAX_COUNT,
};

