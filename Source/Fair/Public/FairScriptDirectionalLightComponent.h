#pragma once
#include "CoreMinimal.h"
#include "Components/DirectionalLightComponent.h"
#include "FairScriptDirectionalLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFairScriptDirectionalLightComponent : public UDirectionalLightComponent {
    GENERATED_BODY()
public:
    UFairScriptDirectionalLightComponent();
};

