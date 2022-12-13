#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FairBattleArea.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class FAIR_API AFairBattleArea : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    AFairBattleArea();
};

