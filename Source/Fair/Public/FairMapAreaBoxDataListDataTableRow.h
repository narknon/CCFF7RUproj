#pragma once
#include "CoreMinimal.h"
#include "EFairMapIndex.h"
#include "Engine/DataTable.h"
#include "FairMapAreaBoxData.h"
#include "FairMapAreaBoxDataListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairMapAreaBoxDataListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairMapIndex MapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMapAreaBoxData> boxDataList;
    
    FAIR_API FFairMapAreaBoxDataListDataTableRow();
};

