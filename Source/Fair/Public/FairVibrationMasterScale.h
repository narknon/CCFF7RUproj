#pragma once
#include "CoreMinimal.h"
#include "EVibrationPlatformType.h"
#include "Engine/DataTable.h"
#include "FairVibrationMasterScale.generated.h"

USTRUCT(BlueprintType)
struct FFairVibrationMasterScale : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EVibrationPlatformType PlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftLargeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightLargeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftSmallScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightSmallScale;
    
    FAIR_API FFairVibrationMasterScale();
};

