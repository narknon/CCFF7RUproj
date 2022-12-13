#pragma once
#include "CoreMinimal.h"
#include "EDebugLoadAssetType.generated.h"

UENUM(BlueprintType)
enum class EDebugLoadAssetType : uint8 {
    Invalid,
    MotionAsset,
    Num,
};

