#pragma once
#include "CoreMinimal.h"
#include "EDistanceWeight.generated.h"

UENUM(BlueprintType)
namespace EDistanceWeight {
    enum Type {
        LINEAR,
        INVERSE_LINEAR,
        QUADRATIC,
        INVERSE_QUAD,
        W_Max,
    };
}

