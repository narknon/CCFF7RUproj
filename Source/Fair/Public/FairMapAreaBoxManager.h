#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairMapAreaBoxManager.generated.h"

class UFairMapAreaBoxList;

UCLASS(Blueprintable)
class FAIR_API UFairMapAreaBoxManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairMapAreaBoxList* m_mapAreaBoxList;
    
public:
    UFairMapAreaBoxManager();
};

