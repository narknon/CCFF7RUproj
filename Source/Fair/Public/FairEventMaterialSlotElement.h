#pragma once
#include "CoreMinimal.h"
#include "FairEventMaterialSlotElement.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FFairEventMaterialSlotElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* OldMaterialInstance;
    
    FAIR_API FFairEventMaterialSlotElement();
};

