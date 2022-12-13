#pragma once
#include "CoreMinimal.h"
#include "FairCharaThinkDistInfo.h"
#include "FairCharaThinkParameterInfo.h"
#include "CharaThinkInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharaThinkInfo {
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
    
    FAIR_API FCharaThinkInfo();
};

