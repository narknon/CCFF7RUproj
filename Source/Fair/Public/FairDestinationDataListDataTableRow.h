#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairDestinationStoryData.h"
#include "FairDestinationDataListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairDestinationDataListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDestinationStoryData> storyDataList;
    
    FAIR_API FFairDestinationDataListDataTableRow();
};

