#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LanguageSelect.h"
#include "LocalizeTextParam.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FLocalizeTextParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLanguageSelect Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RenderTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    FLocalizeTextParam();
};

