#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FairSoundComponentPool.generated.h"

class UFairSoundPoolObject;

UCLASS(Blueprintable)
class FAIR_API UFairSoundComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFairSoundPoolObject*> m_componentPool;
    
public:
    UFairSoundComponentPool();
};

