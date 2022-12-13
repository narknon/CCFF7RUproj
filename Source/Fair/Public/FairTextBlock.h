#pragma once
#include "CoreMinimal.h"
#include "LocalizeTextParam.h"
#include "Components/TextBlock.h"
#include "FairTextBlock.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocalizeTextParam> FontSizeParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizeTextParam DefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFitText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FitTextAt;
    
    UFairTextBlock();
};

