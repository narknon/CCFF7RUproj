#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairTipsManager.generated.h"

class UFairTipsShowMissionList;
class UFairTipsDataList;

UCLASS(Blueprintable)
class UFairTipsManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairTipsDataList* m_tipsDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairTipsShowMissionList* m_tipsShowMissionList;
    
public:
    UFairTipsManager();
};

