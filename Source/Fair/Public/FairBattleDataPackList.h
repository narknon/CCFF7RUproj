#pragma once
#include "CoreMinimal.h"
#include "FairBattleDataPackInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairBattleDataPackList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairBattleDataPackList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairBattleDataPackInfo> m_battleDataPackInfoMap;
    
public:
    UFairBattleDataPackList();
};

