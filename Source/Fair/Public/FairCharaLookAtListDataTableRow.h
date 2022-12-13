#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairLookAtElements.h"
#include "FairCharaLookAtListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaLookAtListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairLookAtElements> LookAtElements;
    
    FAIR_API FFairCharaLookAtListDataTableRow();
};

