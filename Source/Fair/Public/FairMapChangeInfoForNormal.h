#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForNormal_PrevMapNames.h"
#include "FairMapChangeInfoForNormal.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForNormal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForNormal_PrevMapNames> entries;
    
    FAIR_API FFairMapChangeInfoForNormal();
};

