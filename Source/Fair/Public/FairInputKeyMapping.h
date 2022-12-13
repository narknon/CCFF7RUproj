#pragma once
#include "CoreMinimal.h"
#include "FairInputKey.h"
#include "FairInputAction.h"
#include "Engine/DataTable.h"
#include "FairInputKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FFairInputKeyMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FairInputAction Action;
    
    UPROPERTY(EditAnywhere)
    FairInputKey Key;
    
    FAIR_API FFairInputKeyMapping();
};

