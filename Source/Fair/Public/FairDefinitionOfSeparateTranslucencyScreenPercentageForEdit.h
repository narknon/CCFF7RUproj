#pragma once
#include "CoreMinimal.h"
#include "EDefinitionPlatform.h"
#include "FairDefinitionOfSeparateTranslucencyScreenPercentageForEdit.generated.h"

USTRUCT(BlueprintType)
struct FFairDefinitionOfSeparateTranslucencyScreenPercentageForEdit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDefinitionPlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Low;
    
    FAIR_API FFairDefinitionOfSeparateTranslucencyScreenPercentageForEdit();
};

