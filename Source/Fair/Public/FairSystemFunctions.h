#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairSystemFunctions.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairSystemFunctions : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UFairSystemFunctions();
    UFUNCTION(BlueprintCallable)
    static void SetEnableShareRecording(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableShareRecording();
    
};

