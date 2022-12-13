#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIEscape.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIEscape : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_3DPosOffset;
    
public:
    UUIEscape();
};

