#pragma once
#include "CoreMinimal.h"
#include "FairStatusColorParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairStatusColorParamData.generated.h"

UCLASS(Blueprintable)
class UFairStatusColorParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairStatusColorParam> m_StatusColorParam;
    
public:
    UFairStatusColorParamData();
};

