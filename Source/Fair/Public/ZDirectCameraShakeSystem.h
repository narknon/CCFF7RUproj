#pragma once
#include "CoreMinimal.h"
#include "DirectCameraShakeRequestData.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZDirectCameraShakeSystem.generated.h"

class UCurveVector;

UCLASS(Blueprintable)
class FAIR_API UZDirectCameraShakeSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDirectCameraShakeRequestData> m_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_playingCurveAsset;
    
public:
    UZDirectCameraShakeSystem();
};

