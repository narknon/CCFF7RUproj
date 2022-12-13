#pragma once
#include "CoreMinimal.h"
#include "FairCharaFacialCurveInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaFacialCurveListData.generated.h"

UCLASS(Blueprintable)
class UFairCharaFacialCurveListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaFacialCurveInfo> m_CharaFacialCurveInfoList;
    
public:
    UFairCharaFacialCurveListData();
};

