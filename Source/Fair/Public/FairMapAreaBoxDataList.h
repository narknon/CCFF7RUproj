#pragma once
#include "CoreMinimal.h"
#include "FairMapAreaBoxData.h"
#include "FairMapAreaBoxDataList.generated.h"

USTRUCT(BlueprintType)
struct FFairMapAreaBoxDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMapAreaBoxData> boxDataList;
    
    FAIR_API FFairMapAreaBoxDataList();
};

