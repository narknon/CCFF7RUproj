#pragma once
#include "CoreMinimal.h"
#include "ZMapConfigListDataTableRow.h"
#include "FairMapConfigListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairMapConfigListDataTableRow : public FZMapConfigListDataTableRow {
    GENERATED_BODY()
public:
    FAIR_API FFairMapConfigListDataTableRow();
};

