#pragma once
#include "CoreMinimal.h"
#include "FairMissionBonusData.h"
#include "ZDataTableDataAssetBase.h"
#include "FairMissionBonusDataList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairMissionBonusDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMissionBonusData> m_FairMissionBonusData;
    
public:
    UFairMissionBonusDataList();
};

