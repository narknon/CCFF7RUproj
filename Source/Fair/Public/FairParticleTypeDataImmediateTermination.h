#pragma once
#include "CoreMinimal.h"
#include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "FairParticleTypeDataImmediateTermination.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFairParticleTypeDataImmediateTermination : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UFairParticleTypeDataImmediateTermination();

    //~ Begin UParticleModuleTypeDataBase Interface
    virtual FParticleEmitterInstance* CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent) override;
    //~ End UParticleModuleTypeDataBase Interface
};

