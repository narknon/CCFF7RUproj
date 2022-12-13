#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairBaseWidget.h"
#include "UICashbox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUICashbox : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> m_cursorOffset;
    
    UUICashbox();
};

