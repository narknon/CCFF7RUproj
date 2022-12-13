#pragma once
#include "CoreMinimal.h"
#include "ColorData.h"
#include "Blueprint/UserWidget.h"
#include "FairBaseWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FAIR_API UFairBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorData> ProgramColorList;
    
public:
    UFairBaseWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void NativeCallbackUIAnimationEvent();
    
};

