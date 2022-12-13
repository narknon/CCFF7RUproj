#pragma once
#include "CoreMinimal.h"
#include "EndCreditsItemWidget.generated.h"

class UUIEndCreditsItemBase;

USTRUCT(BlueprintType)
struct FEndCreditsItemWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIEndCreditsItemBase* pWidget;
    
    FAIR_API FEndCreditsItemWidget();
};

