#pragma once
#include "CoreMinimal.h"
#include "CameraShakeParameter.h"
#include "ZDataTableDataAssetBase.h"
#include "ZCameraShakeList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UZCameraShakeList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCameraShakeParameter> m_cameraShakeParameterList;
    
public:
    UZCameraShakeList();
};

