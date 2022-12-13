#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIDMWGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIDMWGauge : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinGauge;
    
public:
    UUIDMWGauge();
};

