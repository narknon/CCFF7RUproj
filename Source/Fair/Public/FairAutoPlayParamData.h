#pragma once
#include "CoreMinimal.h"
#include "FairAutoPlayParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairAutoPlayParamData.generated.h"

UCLASS(Blueprintable)
class UFairAutoPlayParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<uint32, FFairAutoPlayParam> m_AutoPlayParam;
    
public:
    UFairAutoPlayParamData();
};

