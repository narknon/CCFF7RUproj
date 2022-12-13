#pragma once
#include "CoreMinimal.h"
#include "EFairDebugCameraInfoType.generated.h"

UENUM(BlueprintType)
enum class EFairDebugCameraInfoType : uint8 {
    CameraInfo,
    StatusInfo,
    AdjustInfo,
    CameraReset,
    RotateSpeed,
    DistRecover,
    RootOffsetAdjust,
    RootDelay,
    MoveAngleAdjust,
    SlopeAdjust,
    WallAdjust,
    SpatialAdjust,
    BattleAdjust,
    LockOn,
    LockOnChange,
    ReturnFocus,
    KeepFocus,
    TargetAdjust,
    HeightCheckInfo,
    GameCameraLerp,
    TransparentInfo,
    FixCameraInfo,
    CurrentPresetInfo,
    MapPresetInfo,
    AreaPresetInfo,
    Max,
};

