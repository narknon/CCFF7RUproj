#pragma once
#include "CoreMinimal.h"
#include "FairGeneralPurposeMotionInterpolationParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairGeneralPurposeMotionInterpolationData.generated.h"

UCLASS(Blueprintable)
class UFairGeneralPurposeMotionInterpolationData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairGeneralPurposeMotionInterpolationParameter> m_interpolationDataList;
    
public:
    UFairGeneralPurposeMotionInterpolationData();
};

