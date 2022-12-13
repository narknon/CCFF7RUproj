#pragma once
#include "CoreMinimal.h"
#include "FairSlotFakeParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairSlotFakeParameterData.generated.h"

UCLASS(Blueprintable)
class UFairSlotFakeParameterData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairSlotFakeParameter> m_SlotParam;
    
public:
    UFairSlotFakeParameterData();
};

