#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UITutorial.generated.h"

class UTexture2D;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUITutorial : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollWheelContinueSec;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_usingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_materialInstance;
    
public:
    UUITutorial();
};

