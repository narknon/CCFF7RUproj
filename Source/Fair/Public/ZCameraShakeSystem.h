#pragma once
#include "CoreMinimal.h"
#include "CameraShakeRequestData.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZCameraShakeSystem.generated.h"

class UZCameraShakeList;

UCLASS(Blueprintable)
class FAIR_API UZCameraShakeSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZCameraShakeList* m_cameraShakeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraShakeRequestData> m_request;
    
public:
    UZCameraShakeSystem();
};

