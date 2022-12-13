#pragma once
#include "CoreMinimal.h"
#include "FairBattleEffectOffsetInfo.h"
#include "FairBattleEffectOffsetInfoList.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleEffectOffsetInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleEffectOffsetInfo> EffectOffsetInfo;
    
    FAIR_API FFairBattleEffectOffsetInfoList();
};

