#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "FairGameCameraActor.generated.h"

UCLASS(Blueprintable)
class AFairGameCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    AFairGameCameraActor();
    UFUNCTION(BlueprintCallable)
    void TriggerSetTranslucencyReflectionCurrentSceneCopy();
    
};

