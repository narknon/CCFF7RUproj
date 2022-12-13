#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "FairBaseEventWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FAIR_API UFairBaseEventWidget : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UFairBaseEventWidget();
};

