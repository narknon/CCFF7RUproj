#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairCharaStandMotion_DataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaStandMotion_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chr_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motion_id;
    
    FAIR_API FFairCharaStandMotion_DataTableRow();
};

