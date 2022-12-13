#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairWidgets.generated.h"

class UFairBaseWidget;

UCLASS(Blueprintable)
class UFairWidgets : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFairBaseWidget*> m_widgetArray;
    
public:
    UFairWidgets();
};

