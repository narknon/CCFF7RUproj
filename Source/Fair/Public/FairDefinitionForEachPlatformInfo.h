#pragma once
#include "CoreMinimal.h"
#include "FairDefinitionOfSeparateTranslucencyScreenPercentageForGame.h"
#include "FairDefinitionForEachPlatformInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairDefinitionForEachPlatformInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDefinitionOfSeparateTranslucencyScreenPercentageForGame> SeparateTranslucencyList;
    
    FAIR_API FFairDefinitionForEachPlatformInfo();
};

