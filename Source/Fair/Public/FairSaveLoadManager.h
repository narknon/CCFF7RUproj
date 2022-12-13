#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairSaveLoadManager.generated.h"

class UFairSaveGameManager;

UCLASS(Blueprintable)
class FAIR_API UFairSaveLoadManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSaveGameManager* m_pSaveGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> m_capturePixels;
    
public:
    UFairSaveLoadManager();
};

