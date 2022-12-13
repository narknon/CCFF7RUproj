#pragma once
#include "CoreMinimal.h"
#include "EFairCollisionPriorityType.h"
#include "Engine/DataTable.h"
#include "FairCharaCapsuleInfo.h"
#include "FairCharaLimitInfo.h"
#include "FairCharaDamageReactionInfo.h"
#include "FairCharaUIPosition.h"
#include "FairCharaAbnormalConditionResistanceInfoList.h"
#include "FairBattleEffectOffsetInfoList.h"
#include "FairCharaInfoDataListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaInfoDataListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaCapsuleInfo> CapsuleInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairCollisionPriorityType CollisionPriority;
    
    UPROPERTY(EditAnywhere)
    uint32 PriorityValue;
    
    UPROPERTY(EditAnywhere)
    uint32 PriorityPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaLimitInfo> LimitInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCharaDamageReactionInfo DamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCharaUIPosition CharaUIPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaAbnormalConditionResistanceInfoList> CharaAbnormalConditionResistancesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleEffectOffsetInfoList CharaEffectOffsetInfoList;
    
    FAIR_API FFairCharaInfoDataListTableRow();
};

