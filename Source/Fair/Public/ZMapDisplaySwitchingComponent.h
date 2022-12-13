#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZMapDisplaySwitchingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FAIR_API UZMapDisplaySwitchingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UZMapDisplaySwitchingComponent();
};

