#pragma once
#include "CoreMinimal.h"
#include "FairSlotFlameParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairSlotFlameParameterData.generated.h"

UCLASS(Blueprintable)
class UFairSlotFlameParameterData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairSlotFlameParameter> m_SlotParam;
    
public:
    UFairSlotFlameParameterData();
};

