#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairMultiLevelSequenceManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairMultiLevelSequenceManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UFairMultiLevelSequenceManager();
    UFUNCTION(BlueprintCallable)
    void EndLevelSequence();
    
};

