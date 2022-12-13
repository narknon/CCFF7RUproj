#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ParticleSystemWidget.generated.h"

class AActor;
class UParticleSystem;
class UParticleSystemComponent;
class UUIParticleComponent;

UCLASS(Blueprintable)
class UIPARTICLESYSTEM_API UParticleSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactivate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIParticleComponent* WorldParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WorldParticleActor;
    
public:
    UParticleSystemWidget();
    UFUNCTION(BlueprintCallable)
    void SetReactivate(bool bActivateAndReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetParticleComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateParticles(bool bActive, bool bReset);
    
};

