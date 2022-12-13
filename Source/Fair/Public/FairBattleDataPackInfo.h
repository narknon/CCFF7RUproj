#pragma once
#include "CoreMinimal.h"
#include "FairBattleDataPackInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleDataPackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> motionDiscimgIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effectDiscimgId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 soundDiscimgId;
    
    FAIR_API FFairBattleDataPackInfo();
};

