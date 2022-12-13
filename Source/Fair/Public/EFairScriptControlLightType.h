#pragma once
#include "CoreMinimal.h"
#include "EFairScriptControlLightType.generated.h"

UENUM(BlueprintType)
enum class EFairScriptControlLightType : uint8 {
    Disable,
    DirectionalLight,
    SpotLight,
    PointLight,
    MAX_COUNT,
};

