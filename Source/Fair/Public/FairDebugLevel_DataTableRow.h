#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairDebugLevel_DataTableRow.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FFairDebugLevel_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> level_asset;
    
    FAIR_API FFairDebugLevel_DataTableRow();
};

