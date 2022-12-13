#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairTipsShowMissionDataRow.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairTipsShowMissionDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FFairTipsShowMissionDataRow();
};

