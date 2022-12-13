#pragma once
#include "CoreMinimal.h"
#include "Distributions/DistributionVector.h"
#include "Distributions/DistributionFloat.h"
#include "Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "FairParticleTypeDataSystemFade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UFairParticleTypeDataSystemFade : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector Color;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat ALPHA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoReset;
    
    UFairParticleTypeDataSystemFade();

    //~ Begin UParticleModuleTypeDataBase Interface
    virtual FParticleEmitterInstance* CreateInstance(UParticleEmitter* InEmitterParent, UParticleSystemComponent* InComponent) override;
    //~ End UParticleModuleTypeDataBase Interface
    
};

