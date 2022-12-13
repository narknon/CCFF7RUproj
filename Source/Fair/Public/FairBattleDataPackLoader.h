#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairBattleDataPackLoader.generated.h"

class UFairBattleDataPackList;

UCLASS(Blueprintable)
class FAIR_API UFairBattleDataPackLoader : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairBattleDataPackList* m_battleDataPackList;
    
public:
    UFairBattleDataPackLoader();
};

