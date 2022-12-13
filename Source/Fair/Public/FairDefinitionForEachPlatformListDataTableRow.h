#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairDefinitionOfSeparateTranslucencyScreenPercentageForEdit.h"
#include "FairDefinitionForEachPlatformListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairDefinitionForEachPlatformListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDefinitionOfSeparateTranslucencyScreenPercentageForEdit> SeparateTranslucencyList;
    
    FAIR_API FFairDefinitionForEachPlatformListDataTableRow();
};

