#pragma once
#include "CoreMinimal.h"
#include "EFairModelAnimInstSlotType.generated.h"

UENUM(BlueprintType)
enum class EFairModelAnimInstSlotType : uint8 {
    Body,
    Facial,
    Lip,
    LevelSequence,
    LipsyncNone,
    Lipsync0,
    Lipsync1,
    Lipsync2,
    Lipsync3,
    Lipsync4,
    ShaderAnim,
    MaxNum,
};

