#pragma once
#include "CoreMinimal.h"
#include "EDefinitionPlatform.h"
#include "FairDefinitionOfSeparateTranslucencyScreenPercentageForGame.generated.h"

USTRUCT(BlueprintType)
struct FFairDefinitionOfSeparateTranslucencyScreenPercentageForGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDefinitionPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DefinitionOfScreenPercentage;
    
    FAIR_API FFairDefinitionOfSeparateTranslucencyScreenPercentageForGame();
};

