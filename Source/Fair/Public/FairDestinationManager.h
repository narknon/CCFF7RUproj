#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDestinationManager.generated.h"

class UFairDestinationIcon;
class UFairDestinationDataList;

UCLASS(Blueprintable)
class UFairDestinationManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDestinationDataList* m_DestinationDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairDestinationDataList* m_MissionDestinationDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFairDestinationIcon*> m_IconList;
    
public:
    UFairDestinationManager();
};

