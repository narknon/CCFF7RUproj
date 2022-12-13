#pragma once
#include "CoreMinimal.h"
#include "LocalizeImageParam.h"
#include "Components/Image.h"
#include "FairImage.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairImage : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocalizeImageParam> LocalizedParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizeImageParam DefaultParam;
    
public:
    UFairImage();
};

