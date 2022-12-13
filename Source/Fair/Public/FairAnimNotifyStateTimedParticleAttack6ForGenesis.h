#pragma once
#include "CoreMinimal.h"
#include "EGenesisAttack6Type.h"
#include "GenesisAttack6Particles.h"
#include "FairAnimNotifyStateTimedParticle.h"
#include "FairAnimNotifyStateTimedParticleAttack6ForGenesis.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairAnimNotifyStateTimedParticleAttack6ForGenesis : public UFairAnimNotifyStateTimedParticle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGenesisAttack6Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenesisAttack6Particles Attack6Particles;
    
    UFairAnimNotifyStateTimedParticleAttack6ForGenesis();
};

