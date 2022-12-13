#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDebugAutoPlay.generated.h"

class UFairDebugAutoPlayDataList;

UCLASS(Blueprintable)
class UFairDebugAutoPlay : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDebugAutoPlayDataList* autoPlayDataList;
    
public:
    UFairDebugAutoPlay();
};

