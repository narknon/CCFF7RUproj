#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIConfig.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIConfig : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ChoiceWindowX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_ChoiceWindowY;
    
public:
    UUIConfig();
};

