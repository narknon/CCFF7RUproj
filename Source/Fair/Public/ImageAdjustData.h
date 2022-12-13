#pragma once
#include "CoreMinimal.h"
#include "ImageAdjustData.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FImageAdjustData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FontName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalePercent;
    
    FImageAdjustData();
};

