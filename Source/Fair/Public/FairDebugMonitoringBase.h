#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDebugMonitoringBase.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairDebugMonitoringBase : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UFairDebugMonitoringBase();
};

