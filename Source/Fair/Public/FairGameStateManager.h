#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairGameStateManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairGameStateManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UFairGameStateManager();
    UFUNCTION(BlueprintCallable)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable)
    void InitManager();
    
};

