#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIMail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIMail : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MailInfoScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollWheelContinueSec;
    
    UUIMail();
};

