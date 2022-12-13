#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FairDefaultGameModeBase.generated.h"

class UFairDebugLevelList;
class UZScreenCaptureImageOutput;

UCLASS(Blueprintable, NonTransient)
class FAIR_API AFairDefaultGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDebugLevelList* m_debugLevelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_debugLevelListBoxCurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UZScreenCaptureImageOutput* m_debugScreenCapture;
    
public:
    AFairDefaultGameModeBase();
};

