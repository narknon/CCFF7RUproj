#pragma once
#include "CoreMinimal.h"
#include "EFairCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class EFairCameraShakeType : uint8 {
    CameraShake_S,
    CameraShake_M,
    CameraShake_L,
    AttackHit_S,
    AttackHit_M,
    AttackHit_L,
    AttackMiss,
    BECameraShake_S,
    BECameraShake_M,
    BECameraShake_L,
    Invalid,
};

