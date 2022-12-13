#pragma once
#include "CoreMinimal.h"
#include "FairBattleDefenceData.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleDefenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeforeDefenceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AfterDefenceRate;
    
    FAIR_API FFairBattleDefenceData();
};

