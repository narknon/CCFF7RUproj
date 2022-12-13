#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FairScriptLightActor.generated.h"

class ULightComponent;

UCLASS(Blueprintable)
class AFairScriptLightActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightComponent* LightComponent;
    
public:
    AFairScriptLightActor();
};

