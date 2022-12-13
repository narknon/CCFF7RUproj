#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FairSoundEnvCollision.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class FAIR_API AFairSoundEnvCollision : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnvCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SnapshotName;
    
    AFairSoundEnvCollision();
    UFUNCTION(BlueprintCallable)
    void SetUpEnvCollision(UBoxComponent* pBox);
    
};

