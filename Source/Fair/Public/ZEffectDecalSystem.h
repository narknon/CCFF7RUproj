#pragma once
#include "CoreMinimal.h"
#include "EffectDecalRequestData.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZEffectDecalSystem.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class FAIR_API UZEffectDecalSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectDecalRequestData> m_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<int32, UDecalComponent*> m_components;
    
public:
    UZEffectDecalSystem();
};

