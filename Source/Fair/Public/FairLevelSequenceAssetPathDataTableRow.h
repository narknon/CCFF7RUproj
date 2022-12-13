#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairLevelSequenceAssetPathDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairLevelSequenceAssetPathDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_cut_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_use_sequence;
    
    FAIR_API FFairLevelSequenceAssetPathDataTableRow();
};

