#pragma once
#include "CoreMinimal.h"
#include "FairTipsShowMissionData.h"
#include "ZDataTableDataAssetBase.h"
#include "FairTipsShowMissionList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairTipsShowMissionList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairTipsShowMissionData> m_FairTipsShowMissionData;
    
public:
    UFairTipsShowMissionList();
};

