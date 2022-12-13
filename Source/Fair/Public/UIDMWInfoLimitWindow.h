#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIDMWInfoLimitWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIDMWInfoLimitWindow : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollWheelContinueSec;
    
    UUIDMWInfoLimitWindow();
};

