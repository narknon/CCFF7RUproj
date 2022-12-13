#pragma once
#include "CoreMinimal.h"
#include "EZackAttackCommonType.h"
#include "ZackAttack1Particles.h"
#include "FairAnimNotifyPlayParticleEffect.h"
#include "FairAnimNotifyPlayParticleEffectAttackCommon.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairAnimNotifyPlayParticleEffectAttackCommon : public UFairAnimNotifyPlayParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttackCommonType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack1Particles attack1Particles;
    
    UFairAnimNotifyPlayParticleEffectAttackCommon();
};

