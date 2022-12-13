#pragma once
#include "CoreMinimal.h"
#include "FairCharaAbnormalConditionResistanceInfo.h"
#include "FairCharaAbnormalConditionResistanceInfoList.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaAbnormalConditionResistanceInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaAbnormalConditionResistanceInfo> CharaAbnormalConditionResistances;
    
    FAIR_API FFairCharaAbnormalConditionResistanceInfoList();
};

