#pragma once
#include "CoreMinimal.h"
#include "FairMissionBonusData.generated.h"

USTRUCT(BlueprintType)
struct FFairMissionBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_num;
    
    FAIR_API FFairMissionBonusData();
};

