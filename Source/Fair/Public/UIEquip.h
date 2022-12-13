#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairBaseWidget.h"
#include "UIEquip.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FAIR_API UUIEquip : public UFairBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* MaterialListElementWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaterialListElementWidgetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ItemListElementWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ItemListElementWidgetSize;
    
    UUIEquip();
};

