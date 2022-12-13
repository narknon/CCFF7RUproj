#pragma once
#include "CoreMinimal.h"
#include "FairFootStepSound.generated.h"

USTRUCT(BlueprintType)
struct FFairFootStepSound {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SoundId[32];
    
    FAIR_API FFairFootStepSound();
};

