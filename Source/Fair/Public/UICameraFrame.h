#pragma once
#include "CoreMinimal.h"
#include "FairBaseEventWidget.h"
#include "UICameraFrame.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUICameraFrame : public UFairBaseEventWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_photoTexArray;
    
public:
    UUICameraFrame();
};

