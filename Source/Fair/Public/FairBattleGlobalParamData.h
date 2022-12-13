#pragma once
#include "CoreMinimal.h"
#include "FairBattleGlobalParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairBattleGlobalParamData.generated.h"

UCLASS(Blueprintable)
class UFairBattleGlobalParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleGlobalParam> m_BattleGlobalParam;
    
public:
    UFairBattleGlobalParamData();
};

