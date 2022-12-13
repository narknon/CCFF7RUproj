#pragma once
#include "CoreMinimal.h"
#include "EFairMapIndex.h"
#include "Engine/DataTable.h"
#include "FairGimmickMarkerData.h"
#include "FairGimmickMarkerListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairGimmickMarkerListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairMapIndex MapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairGimmickMarkerData> dataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useBox;
    
    FAIR_API FFairGimmickMarkerListDataTableRow();
};

