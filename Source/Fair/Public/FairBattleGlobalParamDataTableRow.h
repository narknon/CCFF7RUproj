#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairBattleGlobalDamageCalc.h"
#include "FairBattleGlobalLimitParam.h"
#include "FairBattleCharaFaceInfo.h"
#include "FairBattleResultBonusData.h"
#include "FairBattleKillDrainData.h"
#include "FairBattleComboAbilityAttackUpData.h"
#include "FairBattleReadyGrowthStatusInfo.h"
#include "FairBattleDefenceData.h"
#include "FairBattleMoveBlendSpace.h"
#include "FairBattleGlobalParamDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleGlobalParamDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleGlobalDamageCalc DamageCalcInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleGlobalLimitParam LimitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BossEnemyIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleCharaFaceInfo> FaceInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleResultBonusData> ResultBonusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleResultBonusData> ResultBonusHardInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainData KillDrainData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleKillDrainData KillDrainHardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleComboAbilityAttackUpData ComboAbilityAttackUpInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleReadyGrowthStatusInfo ReadyGrowthStatusInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleDefenceData DefenceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleMoveBlendSpace MoveBlendSpace;
    
    FAIR_API FFairBattleGlobalParamDataTableRow();
};

