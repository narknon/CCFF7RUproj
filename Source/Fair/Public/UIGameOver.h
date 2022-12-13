#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIGameOver.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIGameOver : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FadeOutTime;
    
public:
    UUIGameOver();
};

