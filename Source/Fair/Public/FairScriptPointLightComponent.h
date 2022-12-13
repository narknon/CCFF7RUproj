#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "FairScriptPointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFairScriptPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UFairScriptPointLightComponent();
};

