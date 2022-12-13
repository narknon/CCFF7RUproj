#pragma once
#include "CoreMinimal.h"
#include "FairVibrationMotorScaleParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairVibrationMotorScaleData.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairVibrationMotorScaleData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairVibrationMotorScaleParam> m_vibrationMotorScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairVibrationMotorScaleParam> m_platformMotorScaleParam;
    
public:
    UFairVibrationMotorScaleData();
};

