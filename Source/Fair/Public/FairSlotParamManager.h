#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairSlotParamManager.generated.h"

class UFairSlotFakeParameterData;
class UFairSlotFlameParameterData;
class UFairSlotBaseParameterData;

UCLASS(Blueprintable)
class UFairSlotParamManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSlotBaseParameterData* m_SlotBaseParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSlotFlameParameterData* m_SlotFlameParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSlotFakeParameterData* m_SlotFakeParameter;
    
public:
    UFairSlotParamManager();
};

