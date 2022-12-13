#pragma once
#include "CoreMinimal.h"
#include "EFairMapIndex.h"
#include "Engine/DataTable.h"
#include "FairGimmickMarkerData.h"
#include "FairGimmickMarkerParameter.generated.h"

USTRUCT(BlueprintType)
struct FFairGimmickMarkerParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairMapIndex MapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairGimmickMarkerData> dataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useBox;
    
    FAIR_API FFairGimmickMarkerParameter();
};

