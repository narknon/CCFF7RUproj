#pragma once
#include "CoreMinimal.h"
#include "FairVibrationMasterScaleParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairVibrationMasterScaleData.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairVibrationMasterScaleData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairVibrationMasterScaleParam> m_vibrationMasterScaleParam;
    
public:
    UFairVibrationMasterScaleData();
};

