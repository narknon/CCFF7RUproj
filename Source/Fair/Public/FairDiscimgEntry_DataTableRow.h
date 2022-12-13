#pragma once
#include "CoreMinimal.h"
#include "EFairDiscimgDataType.h"
#include "Engine/DataTable.h"
#include "FairDiscimgEntry_DataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairDiscimgEntry_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 discimgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString assetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairDiscimgDataType dataType;
    
    FAIR_API FFairDiscimgEntry_DataTableRow();
};

