#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidgetItem.h"
#include "FairSoundItem.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairSoundItem : public UFairBaseWidgetItem {
    GENERATED_BODY()
public:
    UFairSoundItem();
    UFUNCTION(BlueprintCallable)
    void StopSE(int32 No);
    
    UFUNCTION(BlueprintCallable)
    void PlaySE(int32 No);
    
};

