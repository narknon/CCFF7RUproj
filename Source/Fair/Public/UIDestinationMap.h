#pragma once
#include "CoreMinimal.h"
#include "EUIInputButton.h"
#include "FairBaseWidget.h"
#include "UIDestinationMap.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIDestinationMap : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_overlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputButton m_visibileToggleButton;
    
public:
    UUIDestinationMap();
};

