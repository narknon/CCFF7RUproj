#pragma once
#include "CoreMinimal.h"
#include "FairCameraAssistParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCameraAssistParameterData.generated.h"

UCLASS(Blueprintable)
class UFairCameraAssistParameterData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCameraAssistParameter> m_CameraAssistParameter;
    
public:
    UFairCameraAssistParameterData();
};

