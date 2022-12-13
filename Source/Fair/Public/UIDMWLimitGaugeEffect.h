#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIDMWLimitGaugeEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIDMWLimitGaugeEffect : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlotLevelUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlotLevelDownTime;
    
public:
    UUIDMWLimitGaugeEffect();
};

