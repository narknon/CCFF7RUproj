#pragma once
#include "CoreMinimal.h"
#include "EFairRecommendType.h"
#include "Engine/DataTable.h"
#include "FairRecommendData.h"
#include "FairRecommendDataListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairRecommendDataListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairRecommendType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairRecommendData dataList;
    
    FAIR_API FFairRecommendDataListDataTableRow();
};

