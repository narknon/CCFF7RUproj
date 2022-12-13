#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Engine/DataTable.h"
#include "FairRichImageRow.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairRichImageRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    FFairRichImageRow();
};

