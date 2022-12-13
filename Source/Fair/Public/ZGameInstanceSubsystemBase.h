#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ZGameInstanceSubsystemBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FAIR_API UZGameInstanceSubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UZGameInstanceSubsystemBase();
};

