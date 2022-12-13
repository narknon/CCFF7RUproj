#pragma once
#include "CoreMinimal.h"
#include "EFairPauseType.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairPauseManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairPauseManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UFairPauseManager();
    UFUNCTION(BlueprintCallable)
    void SetGamePause(EFairPauseType pauseType, bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePauseType(EFairPauseType pauseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePause() const;
    
};

