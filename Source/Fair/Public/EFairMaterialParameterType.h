#pragma once
#include "CoreMinimal.h"
#include "EFairMaterialParameterType.generated.h"

UENUM(BlueprintType)
enum class EFairMaterialParameterType : uint8 {
    Scalar,
    Vector,
    Texture,
};

