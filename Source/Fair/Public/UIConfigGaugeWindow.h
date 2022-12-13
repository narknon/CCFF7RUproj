#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIConfigGaugeWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIConfigGaugeWindow : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_MemoryOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MemoryOffsetY;
    
public:
    UUIConfigGaugeWindow();
};

