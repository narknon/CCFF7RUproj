#pragma once
#include "CoreMinimal.h"
#include "EFairCameraReturnFocusType.generated.h"

UENUM(BlueprintType)
enum class EFairCameraReturnFocusType : uint8 {
    None,
    Input,
    Battle,
    Attack,
    LockOn,
    LockOnChange,
    Attention,
};

