#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZMapLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FAIR_API UZMapLightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UZMapLightComponent();
};

