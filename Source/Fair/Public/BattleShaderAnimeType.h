#pragma once
#include "CoreMinimal.h"
#include "BattleShaderAnimeType.generated.h"

UENUM(BlueprintType)
enum class BattleShaderAnimeType : uint8 {
    LimitCanceleSuccess,
    LimitCanceleGaugeBreak,
    Reraise,
    LevelUp,
    ReadyAttack,
    ReadyAttackPart,
    ReadyAttackAll,
    Invincible,
    WeakFire,
    WeakIce,
    WeakThunder,
    Poison,
    PoisonLoop,
    InvinciblePhysicsHit,
    InvincibleMagicHit,
    InvinciblePhysics,
    InvincibleMagic,
    Endurance,
    Barrier,
    MagicBarrier,
    Stop,
    Cure,
    Regen,
    PlDying,
    PlHp30,
    AreaLastAtkDying,
    StopHit,
    None,
};

