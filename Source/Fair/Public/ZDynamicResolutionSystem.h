#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZDynamicResolutionSystem.generated.h"

UCLASS(Blueprintable)
class UZDynamicResolutionSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UZDynamicResolutionSystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware);
    
};

