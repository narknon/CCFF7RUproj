#pragma once
#include "CoreMinimal.h"
#include "EZackAttackCommonType.generated.h"

UENUM(BlueprintType)
enum class EZackAttackCommonType : uint8 {
    Normal1/* = 0x7001*/,
    Normal2,
    Normal3,
    Normal4,
    Poison/* = 0x7045*/,
    Silence,
    Dispel/* = 0x7049*/,
    Drain/* = 0x7053*/,
    Aspirx/* = 0x7056*/,
    NormalEnemy1/* = 0x80A9*/,
    NormalEnemy2,
    NormalEnemy3,
    NormalEnemy4,
};

