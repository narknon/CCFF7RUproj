#pragma once
#include "CoreMinimal.h"
#include "EFairGimmickMarkerIconType.generated.h"

UENUM(BlueprintType)
enum class EFairGimmickMarkerIconType : uint8 {
    Unknown,
    SavePoint,
    TreasureBox,
    AreaChange,
    Door,
    NpcTalk,
    CheckUp,
    PickUp,
    Ladder,
    Valve,
    Event,
};

