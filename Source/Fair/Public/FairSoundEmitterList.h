#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FairSoundEmitterList.generated.h"

class AFairSoundEmitter;

UCLASS(Blueprintable)
class FAIR_API UFairSoundEmitterList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFairSoundEmitter*> emitterList;
    
public:
    UFairSoundEmitterList();
};

