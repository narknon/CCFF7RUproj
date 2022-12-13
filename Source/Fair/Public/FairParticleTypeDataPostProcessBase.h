#pragma once
#include "CoreMinimal.h"
#include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "FairParticleTypeDataPostProcessBase.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UFairParticleTypeDataPostProcessBase : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_priority;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_customMaterial;
    
public:
    UFairParticleTypeDataPostProcessBase();

    //~ Begin UParticleModuleTypeDataBase Interface
    virtual FParticleEmitterInstance* CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent) override;
    //~ End UParticleModuleTypeDataBase Interface
};

