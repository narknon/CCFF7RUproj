#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairDebugAutoPlayBattleSetInfo.h"
#include "FairDebugAutoPlayInfo.h"
#include "FairDebugAutoPlayDataListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugAutoPlayDataListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairDebugAutoPlayBattleSetInfo BattleSetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDebugAutoPlayInfo> Infos;
    
    FAIR_API FFairDebugAutoPlayDataListTableRow();
};

