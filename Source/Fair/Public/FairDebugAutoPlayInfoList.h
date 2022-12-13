#pragma once
#include "CoreMinimal.h"
#include "FairDebugAutoPlayBattleSetInfo.h"
#include "FairDebugAutoPlayInfo.h"
#include "FairDebugAutoPlayInfoList.generated.h"

USTRUCT(BlueprintType)
struct FFairDebugAutoPlayInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairDebugAutoPlayBattleSetInfo BattleSetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDebugAutoPlayInfo> Infos;
    
    FAIR_API FFairDebugAutoPlayInfoList();
};

