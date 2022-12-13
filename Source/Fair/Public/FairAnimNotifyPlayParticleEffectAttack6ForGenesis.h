#pragma once
#include "CoreMinimal.h"
#include "EGenesisAttack6Type.h"
#include "GenesisAttack6Particles.h"
#include "FairAnimNotifyPlayParticleEffect.h"
#include "FairAnimNotifyPlayParticleEffectAttack6ForGenesis.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FAIR_API UFairAnimNotifyPlayParticleEffectAttack6ForGenesis : public UFairAnimNotifyPlayParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGenesisAttack6Type AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenesisAttack6Particles Attack6Particles;
    
    UFairAnimNotifyPlayParticleEffectAttack6ForGenesis();
};

