#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZAntiAliasingSystem.generated.h"

UCLASS(Blueprintable)
class UZAntiAliasingSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UZAntiAliasingSystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware);
    
};

