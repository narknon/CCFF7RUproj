#pragma once
#include "CoreMinimal.h"
#include "FairCameraBasicParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCameraBasicParameterData.generated.h"

UCLASS(Blueprintable)
class UFairCameraBasicParameterData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCameraBasicParameter> m_CameraBasicParameter;
    
public:
    UFairCameraBasicParameterData();
};

