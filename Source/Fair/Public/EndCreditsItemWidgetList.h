#pragma once
#include "CoreMinimal.h"
#include "EndCreditsItemWidget.h"
#include "EndCreditsItemWidgetList.generated.h"

USTRUCT(BlueprintType)
struct FEndCreditsItemWidgetList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEndCreditsItemWidget> tWidgetList;
    
    FAIR_API FEndCreditsItemWidgetList();
};

