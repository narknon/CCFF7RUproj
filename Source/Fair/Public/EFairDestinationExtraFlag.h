#pragma once
#include "CoreMinimal.h"
#include "EFairDestinationExtraFlag.generated.h"

UENUM(BlueprintType)
enum class EFairDestinationExtraFlag : uint8 {
    None,
    NoDestination,
    MultipleDestination,
    SkipUpateMessage,
    BriefingRoom_Corridor,
    BriefingRoom_Inside,
    BeforeFindAngealHouse,
    BeforeMidBossInFactory,
    FifthReactor_1F,
    FifthReactor_2F_Entry,
    FifthReactor_2F_Passage,
    FifthReactor_3F,
    FifthReactor_Ladder,
    FifthReactor_Bridge,
    FifthReactor_Valve,
    FacilityDocumentA,
    FacilityDocumentB,
    FacilityDocumentC,
    UseBoxCollision,
    Chapter03_HollanderHide,
    Chapter04_InCellKeyEvent,
    Chapter04_OutCellKeyEvent,
    Chapter07_WagonItem_01,
    Chapter07_WagonItem_02,
    Chapter07_WagonItem_03,
    Chapter07_WagonItem_04,
    Chapter09_GetSolderWear,
    Chapter10_CheckedConsole,
    Chapter10_DefeatGRegicide,
    Chapter10_Before_WingKey,
    Chapter10_After_WingKey,
    Chapter10_Dungeon_01,
    Chapter10_Dungeon_02,
};

