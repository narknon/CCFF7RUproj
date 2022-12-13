#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZFieldEffectSystem.generated.h"

class AFairFieldEffectActor;

UCLASS(Blueprintable)
class UZFieldEffectSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFairFieldEffectActor*> m_effects;
    
public:
    UZFieldEffectSystem();
};

