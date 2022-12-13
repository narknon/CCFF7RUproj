#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairGameMain.generated.h"

class UFairPSPDrawTask;

UCLASS(Blueprintable)
class UFairGameMain : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairPSPDrawTask* m_pspDrawTask;
    
public:
    UFairGameMain();
};

