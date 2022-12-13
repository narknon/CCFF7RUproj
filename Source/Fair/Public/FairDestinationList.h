#pragma once
#include "CoreMinimal.h"
#include "FairDestinationStoryData.h"
#include "FairDestinationList.generated.h"

USTRUCT(BlueprintType)
struct FFairDestinationList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDestinationStoryData> storyDataList;
    
    FAIR_API FFairDestinationList();
};

