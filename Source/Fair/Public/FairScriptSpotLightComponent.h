#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "FairScriptSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFairScriptSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UFairScriptSpotLightComponent();
};

