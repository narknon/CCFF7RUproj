#pragma once
#include "CoreMinimal.h"
#include "EZackAttackCommonType.h"
#include "ZackAttack1Particles.h"
#include "FairAnimNotifyStateTimedParticle.h"
#include "FairAnimNotifyStateTimedParticleAttackCommon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTimedParticleAttackCommon : public UFairAnimNotifyStateTimedParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttackCommonType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack1Particles attack1Particles;
    
    UFairAnimNotifyStateTimedParticleAttackCommon();
};

