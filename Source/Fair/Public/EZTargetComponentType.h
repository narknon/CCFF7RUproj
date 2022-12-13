#pragma once
#include "CoreMinimal.h"
#include "EZTargetComponentType.generated.h"

UENUM(BlueprintType)
enum class EZTargetComponentType : uint8 {
    None,
    Decal,
    StaticMesh,
};

