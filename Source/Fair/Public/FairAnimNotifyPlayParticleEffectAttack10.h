#pragma once
#include "CoreMinimal.h"
#include "EZackAttack10Type.h"
#include "ZackAttack10Particles.h"
#include "FairAnimNotifyPlayParticleEffect.h"
#include "FairAnimNotifyPlayParticleEffectAttack10.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairAnimNotifyPlayParticleEffectAttack10 : public UFairAnimNotifyPlayParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack10Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack10Particles Attack10Particles;
    
    UFairAnimNotifyPlayParticleEffectAttack10();
};

