#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "FairBaseWidgetItem.generated.h"

UCLASS(Abstract, Blueprintable)
class FAIR_API UFairBaseWidgetItem : public UWidget {
    GENERATED_BODY()
public:
    UFairBaseWidgetItem();
};

