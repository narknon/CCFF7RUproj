#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "LanguageSelect.h"
#include "LocalizeImageParam.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FLocalizeImageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLanguageSelect Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    FLocalizeImageParam();
};

