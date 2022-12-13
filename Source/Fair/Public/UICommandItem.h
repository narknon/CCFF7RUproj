#pragma once
#include "CoreMinimal.h"
#include "CommandSlotData.h"
#include "FairBaseWidget.h"
#include "UICommandItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUICommandItem : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommandSlotData> SlotList4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommandSlotData> SlotList6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommandSlotData> SlotList8;
    
public:
    UUICommandItem();
};

