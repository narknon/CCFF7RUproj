#pragma once
#include "CoreMinimal.h"
#include "EZackAttack10Type.generated.h"

UENUM(BlueprintType)
enum class EZackAttack10Type : uint8 {
    StopSword/* = 0x7047*/,
    DeathSword,
    FireSword/* = 0x704A*/,
    FiraSword/* = 0x704D*/,
    FiragaSword/* = 0x7050*/,
    PrtMagAttack/* = 0x711C*/,
    BlizzardSword/* = 0x704B*/,
    BlizzaraSword/* = 0x704E*/,
    BlizzagaSword/* = 0x7051*/,
    ThunderSword/* = 0x704C*/,
    ThundaraSword/* = 0x704F*/,
    ThundagaSword/* = 0x7052*/,
    EZackAttack10Type_MAX/* = 0x711D*/,
};

