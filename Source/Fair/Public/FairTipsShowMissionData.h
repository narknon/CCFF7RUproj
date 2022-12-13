#pragma once
#include "CoreMinimal.h"
#include "FairTipsShowMissionData.generated.h"

USTRUCT(BlueprintType)
struct FFairTipsShowMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    FAIR_API FFairTipsShowMissionData();
};

