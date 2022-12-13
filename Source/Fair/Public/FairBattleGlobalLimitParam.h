#pragma once
#include "CoreMinimal.h"
#include "FairBattleGlobalLimitParam.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleGlobalLimitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubLimitWaitTime;
    
    FAIR_API FFairBattleGlobalLimitParam();
};

