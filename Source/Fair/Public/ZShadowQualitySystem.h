#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZShadowQualitySystem.generated.h"

UCLASS(Blueprintable)
class UZShadowQualitySystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UZShadowQualitySystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware);
    
};

