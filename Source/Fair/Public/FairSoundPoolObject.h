#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FairSoundPoolObject.generated.h"

class UFairAtomComponent;

UCLASS(Blueprintable)
class FAIR_API UFairSoundPoolObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFairAtomComponent* m_component;
    
public:
    UFairSoundPoolObject();
};

