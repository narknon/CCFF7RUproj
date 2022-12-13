#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FairEffectBaseActor.generated.h"

class UParticleSystem;
class UFairParticleSystemComponent;

UCLASS(Blueprintable)
class FAIR_API AFairEffectBaseActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFairParticleSystemComponent* m_fairParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_particle;
    
    AFairEffectBaseActor();
};

