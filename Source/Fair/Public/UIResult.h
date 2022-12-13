#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIResult : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CntEndMaxTimer;
    
public:
    UUIResult();
};

