#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ZLevelStreamingSetting.h"
#include "ZLevelStreamingSettingListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FZLevelStreamingSettingListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZLevelStreamingSetting level_streaming_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    FAIR_API FZLevelStreamingSettingListDataTableRow();
};

