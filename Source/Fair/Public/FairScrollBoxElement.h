#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FairScrollBoxElement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UFairScrollBoxElement : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_pWidget;
    
public:
    UFairScrollBoxElement();
};

