#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairFileNameDetect.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairFileNameDetect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FFairFileNameDetect();
};

