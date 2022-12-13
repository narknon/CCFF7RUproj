#pragma once
#include "CoreMinimal.h"
#include "EFairMapChangeInfoType.generated.h"

UENUM(BlueprintType)
enum class EFairMapChangeInfoType : uint8 {
    Normal,
    Event,
    ExtraMap,
    Mission,
    DebugEventJump,
    Unknown,
    _Num = 0x4,
    EFairMapChangeInfoType_MAX = 0x6,
};

