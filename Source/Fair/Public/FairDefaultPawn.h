#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "FairDefaultPawn.generated.h"

UCLASS(Blueprintable)
class FAIR_API AFairDefaultPawn : public ADefaultPawn {
    GENERATED_BODY()
public:
    AFairDefaultPawn();
private:
    UFUNCTION(BlueprintCallable)
    void WidenCameraFieldOfView(float Val);
    
};

