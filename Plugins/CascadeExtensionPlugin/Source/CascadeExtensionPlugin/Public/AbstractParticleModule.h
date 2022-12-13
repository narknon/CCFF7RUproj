#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "Particles/ParticleModule.h"
#include "AbstractParticleModule.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAbstractParticleModule : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleRandomSeedInfo RandomSeedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopAfter;
    
    UAbstractParticleModule();
};

