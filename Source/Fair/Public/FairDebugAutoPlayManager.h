#pragma once
#include "CoreMinimal.h"
#include "EAutoPlayCommandType.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairDebugAutoPlayManager.generated.h"

class UFairAutoPlayParamData;
class UFairAutoPlayExecutor;

UCLASS(Blueprintable)
class FAIR_API UFairDebugAutoPlayManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAutoPlayCommandType, UFairAutoPlayExecutor*> mExecutors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAutoPlayParamData* mAutoPlayParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAutoPlayParamData* mAutoPlayMissionParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAutoPlayParamData* mAutoPlayMissionOnlyParamDataTable;
    
public:
    UFairDebugAutoPlayManager();
};

