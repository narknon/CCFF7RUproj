#pragma once
#include "CoreMinimal.h"
#include "FairBattlResultBonusType.h"
#include "FairBattleResultBonusData.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleResultBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattlResultBonusType BounsType;
    
    UPROPERTY(EditAnywhere)
    double Hp;
    
    UPROPERTY(EditAnywhere)
    double Mp;
    
    UPROPERTY(EditAnywhere)
    double Ap;
    
    FAIR_API FFairBattleResultBonusData();
};

