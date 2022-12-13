#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForNormal_PrevScriptNames.h"
#include "FairMapChangeInfoForNormal_PrevMapNames.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForNormal_PrevMapNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForNormal_PrevScriptNames> entries;
    
    FAIR_API FFairMapChangeInfoForNormal_PrevMapNames();
};

