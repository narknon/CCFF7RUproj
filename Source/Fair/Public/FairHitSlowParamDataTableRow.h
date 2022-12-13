#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairHitSlowParamDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairHitSlowParamDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    uint32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowDelay;
    
    FAIR_API FFairHitSlowParamDataTableRow();
};

