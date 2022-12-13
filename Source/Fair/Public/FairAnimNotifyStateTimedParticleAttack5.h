#pragma once
#include "CoreMinimal.h"
#include "EZackAttack5Type.h"
#include "ZackAttack5Particles.h"
#include "FairAnimNotifyStateTimedParticle.h"
#include "FairAnimNotifyStateTimedParticleAttack5.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTimedParticleAttack5 : public UFairAnimNotifyStateTimedParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack5Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack5Particles Attack5Particles;
    
    UFairAnimNotifyStateTimedParticleAttack5();
};

