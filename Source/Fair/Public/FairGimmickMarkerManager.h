#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairGimmickMarkerManager.generated.h"

class UFairGimmickMarkerDataList;

UCLASS(Blueprintable)
class UFairGimmickMarkerManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairGimmickMarkerDataList* m_GimmickMarkerDataTable;
    
public:
    UFairGimmickMarkerManager();
};

