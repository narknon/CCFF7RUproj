#pragma once
#include "CoreMinimal.h"
#include "EZMapConfigLevelLoadType.generated.h"

UENUM(BlueprintType)
enum class EZMapConfigLevelLoadType : uint8 {
    Default,
    Preload,
    SceneChange,
    DeferredLoad,
    _Num,
};

