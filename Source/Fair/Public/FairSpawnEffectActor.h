#pragma once
#include "CoreMinimal.h"
#include "FairEffectBaseActor.h"
#include "FairSpawnEffectActor.generated.h"

class UParticleSystem;
class UCurveFloat;

UCLASS(Blueprintable)
class FAIR_API AFairSpawnEffectActor : public AFairEffectBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeCurve;
    
public:
    AFairSpawnEffectActor();
    UFUNCTION(BlueprintCallable)
    void ReleaseBind();
    
    UFUNCTION(BlueprintCallable)
    void Play(UParticleSystem* particle);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
};

