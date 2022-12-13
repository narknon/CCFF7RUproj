#pragma once
#include "CoreMinimal.h"
#include "FairScriptControlLightInfo.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairLightControlSystem.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairLightControlSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairScriptControlLightInfo> m_lightControlList;
    
public:
    UFairLightControlSystem();
};

