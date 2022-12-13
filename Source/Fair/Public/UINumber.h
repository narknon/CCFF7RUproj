#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairBaseWidget.h"
#include "UINumber.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUINumber : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_NumScale;
    
public:
    UUINumber();
};

