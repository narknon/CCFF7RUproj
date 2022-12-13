#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairLevelSequenceAssetPathManager.generated.h"

class UFairLevelSequenceAssetPathList;

UCLASS(Blueprintable)
class UFairLevelSequenceAssetPathManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairLevelSequenceAssetPathList* m_LevelSequenceAssetPathList;
    
public:
    UFairLevelSequenceAssetPathManager();
};

