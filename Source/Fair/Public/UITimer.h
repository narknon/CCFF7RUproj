#pragma once
#include "CoreMinimal.h"
#include "FairBaseEventWidget.h"
#include "UITimer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUITimer : public UFairBaseEventWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestinationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetApplyTime;
    
public:
    UUITimer();
};

