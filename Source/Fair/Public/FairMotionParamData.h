#pragma once
#include "CoreMinimal.h"
#include "FairMotionParamArray.h"
#include "ZDataTableDataAssetBase.h"
#include "FairMotionParamData.generated.h"

UCLASS(Blueprintable)
class UFairMotionParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairMotionParamArray> m_MotionParamMap;
    
public:
    UFairMotionParamData();
};

