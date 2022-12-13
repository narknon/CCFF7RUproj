#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairTipsImageFileNameDataRow.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairTipsImageFileNameDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FFairTipsImageFileNameDataRow();
};

