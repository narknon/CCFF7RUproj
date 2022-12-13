#pragma once
#include "CoreMinimal.h"
#include "EZackAttack10Type.h"
#include "ZackAttack10Particles.h"
#include "FairAnimNotifyStateTimedParticle.h"
#include "FairAnimNotifyStateTimedParticleAttack10.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTimedParticleAttack10 : public UFairAnimNotifyStateTimedParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EZackAttack10Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZackAttack10Particles Attack10Particles;
    
    UFairAnimNotifyStateTimedParticleAttack10();
};

