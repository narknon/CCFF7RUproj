#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairBattleDataPack_DataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleDataPack_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 discimgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> contents_discimgID;
    
    FAIR_API FFairBattleDataPack_DataTableRow();
};

