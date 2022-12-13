#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "FairParticleTypeDataCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFairParticleTypeDataCameraShake : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> shakeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UFairParticleTypeDataCameraShake();

    //~ Begin UParticleModuleTypeDataBase Interface
    virtual FParticleEmitterInstance* CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent) override;
    //~ End UParticleModuleTypeDataBase Interface
};

