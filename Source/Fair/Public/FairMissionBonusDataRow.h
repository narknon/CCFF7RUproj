#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairMissionBonusDataRow.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairMissionBonusDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 itemNum;
    
    FFairMissionBonusDataRow();
};

