#pragma once
#include "CoreMinimal.h"
#include "EZackAttack5Type.generated.h"

UENUM(BlueprintType)
enum class EZackAttack5Type : uint8 {
    Turn1/* = 0x703C*/,
    Turn2,
    Turn3/* = 0x711B*/,
    PoisonTurn/* = 0x703E*/,
    StopTurn,
    DeathTurn,
    EZackAttack5Type_MAX/* = 0x711C*/,
};

