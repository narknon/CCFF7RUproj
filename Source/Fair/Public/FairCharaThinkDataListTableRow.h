#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairCharaThinkDistInfo.h"
#include "FairCharaThinkParameterInfo.h"
#include "FairCharaThinkDataListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaThinkDataListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 EnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCharaThinkParameterInfo ThinkParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaThinkDistInfo> ThinkDistInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ProhibitAttackOutside;
    
    FAIR_API FFairCharaThinkDataListTableRow();
};

