#pragma once
#include "CoreMinimal.h"
#include "FairLookAtElements.h"
#include "FairCharaLookAtInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaLookAtInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairLookAtElements> LookAtElements;
    
    FAIR_API FFairCharaLookAtInfo();
};

