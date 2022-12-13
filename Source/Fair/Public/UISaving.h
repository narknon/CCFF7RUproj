#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UISaving.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUISaving : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DrawTime;
    
public:
    UUISaving();
};

