#pragma once
#include "CoreMinimal.h"
#include "EFairDiscimgDataType.generated.h"

UENUM(BlueprintType)
enum class EFairDiscimgDataType : uint8 {
    Unknown,
    Movie,
    MovieEn,
    Motion,
    MotionJp,
    Effect,
    Sound,
    Monmotion,
    Plymotion,
    Magic,
    MiniMap,
    BoneTable,
    Script,
    BattleExcel,
    DataLink,
    Object,
    Message,
    Monster,
    DebugNoPackage,
    ParamData,
    EventParameter,
    MapBin,
};

