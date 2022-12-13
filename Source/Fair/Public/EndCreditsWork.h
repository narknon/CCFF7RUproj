#pragma once
#include "CoreMinimal.h"
#include "EndCreditsWork.generated.h"

class UUIEndCreditsItemBase;

USTRUCT(BlueprintType)
struct FEndCreditsWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIEndCreditsItemBase* pWidget;
    
    FAIR_API FEndCreditsWork();
};

