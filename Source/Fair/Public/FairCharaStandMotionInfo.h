#pragma once
#include "CoreMinimal.h"
#include "FairCharaStandMotionInfoList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaStandMotionInfo.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairCharaStandMotionInfo : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairCharaStandMotionInfoList> m_charaStandMotionInfoList;
    
public:
    UFairCharaStandMotionInfo();
};

