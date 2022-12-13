#pragma once
#include "CoreMinimal.h"
#include "FairBaseWidget.h"
#include "UIKeyboardCategoryList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIKeyboardCategoryList : public UFairBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_CursorPos;
    
public:
    UUIKeyboardCategoryList();
};

