#pragma once
#include "CoreMinimal.h"
#include "SlowRequestInfo.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairSlowManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairSlowManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UFairSlowManager();
    UFUNCTION(BlueprintCallable)
    void StopSlow();
    
    UFUNCTION(BlueprintCallable)
    bool RequestSlowStart(FSlowRequestInfo requestInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlow() const;
    
};

