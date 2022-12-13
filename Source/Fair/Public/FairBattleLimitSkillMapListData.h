#pragma once
#include "CoreMinimal.h"
#include "FairBattleLimitSkillMapList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairBattleLimitSkillMapListData.generated.h"

UCLASS(Blueprintable)
class UFairBattleLimitSkillMapListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairBattleLimitSkillMapList> m_LimitSkillMapList;
    
public:
    UFairBattleLimitSkillMapListData();
};

