#pragma once
#include "CoreMinimal.h"
#include "FairScrollBoxWork.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FFairScrollBoxWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* pElementWidget;
    
    FAIR_API FFairScrollBoxWork();
};

