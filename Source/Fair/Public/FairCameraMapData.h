#pragma once
#include "CoreMinimal.h"
#include "FairCameraMapParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCameraMapData.generated.h"

UCLASS(Blueprintable)
class UFairCameraMapData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCameraMapParameter> m_CameraMapDataList;
    
public:
    UFairCameraMapData();
};

