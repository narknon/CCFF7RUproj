#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UISubtitles.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUISubtitles : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextItalicShear;
    
public:
    UUISubtitles();
};

