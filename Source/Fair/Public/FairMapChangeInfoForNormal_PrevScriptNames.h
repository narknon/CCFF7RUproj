#pragma once
#include "CoreMinimal.h"
#include "FairMapChangeInfoForNormal_PrevPlaceIds.h"
#include "FairMapChangeInfoForNormal_PrevScriptNames.generated.h"

USTRUCT(BlueprintType)
struct FFairMapChangeInfoForNormal_PrevScriptNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFairMapChangeInfoForNormal_PrevPlaceIds> entries;
    
    FAIR_API FFairMapChangeInfoForNormal_PrevScriptNames();
};

