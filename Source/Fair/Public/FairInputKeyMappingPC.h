#pragma once
#include "CoreMinimal.h"
#include "FairInputKey.h"
#include "FairInputAction.h"
#include "Engine/DataTable.h"
#include "FairInputKeyMappingPC.generated.h"

USTRUCT(BlueprintType)
struct FFairInputKeyMappingPC : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FairInputAction Action;
    
    UPROPERTY(EditAnywhere)
    FairInputKey MainKey;
    
    UPROPERTY(EditAnywhere)
    FairInputKey SubKey;
    
    UPROPERTY(EditAnywhere)
    FairInputKey MouseKey;
    
    FAIR_API FFairInputKeyMappingPC();
};

