#pragma once
#include "CoreMinimal.h"
#include "FairCharaStandMotionInfoList.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaStandMotionInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chr_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motion_id;
    
    FAIR_API FFairCharaStandMotionInfoList();
};

