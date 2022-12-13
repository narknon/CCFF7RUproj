#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIDMWStepUp.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIDMWStepUp : public UFairBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UTexture2D* m_Texture2D[5];
    
public:
    UUIDMWStepUp();
};

