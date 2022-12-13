#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ZAssetReplaceInfo.h"
#include "ZAssetReplaceListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FZAssetReplaceListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString original_asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZAssetReplaceInfo> replace_info_array;
    
    FAIR_API FZAssetReplaceListDataTableRow();
};

