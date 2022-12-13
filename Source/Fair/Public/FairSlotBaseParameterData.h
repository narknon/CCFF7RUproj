#pragma once
#include "CoreMinimal.h"
#include "FairSlotBaseParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairSlotBaseParameterData.generated.h"

UCLASS(Blueprintable)
class UFairSlotBaseParameterData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairSlotBaseParameter> m_SlotParam;
    
public:
    UFairSlotBaseParameterData();
};

