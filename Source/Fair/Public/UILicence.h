#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UILicence.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUILicence : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollWheelContinueSec;
    
    UUILicence();
};

