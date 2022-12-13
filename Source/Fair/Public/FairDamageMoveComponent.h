#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FairDamageMoveComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FAIR_API UFairDamageMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mOwnerActor;
    
public:
    UFairDamageMoveComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void Update_Native(float DeltaSec);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartDamageMove(FVector DamageDir, float power);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageMoveScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    float GetLength();
    
};

