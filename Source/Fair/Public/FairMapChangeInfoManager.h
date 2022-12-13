#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairMapChangeInfoManager.generated.h"

class UFairMapChangeInfoList;

UCLASS(Blueprintable)
class FAIR_API UFairMapChangeInfoManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMapChangeInfoList* mMapChangeInfoList;
    
public:
    UFairMapChangeInfoManager();
};

