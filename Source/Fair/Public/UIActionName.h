#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIActionName.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIActionName : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InvalidRenderOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxTimerUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AddTimerUI;
    
public:
    UUIActionName();
};

