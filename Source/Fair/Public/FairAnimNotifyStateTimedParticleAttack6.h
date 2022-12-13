#pragma once
#include "CoreMinimal.h"
#include "EZackAttack6Type.h"
#include "ZackAttack6Particles.h"
#include "FairAnimNotifyStateTimedParticle.h"
#include "FairAnimNotifyStateTimedParticleAttack6.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTimedParticleAttack6 : public UFairAnimNotifyStateTimedParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack6Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack6Particles Attack6Particles;
    
    UFairAnimNotifyStateTimedParticleAttack6();
};

