#pragma once
#include "CoreMinimal.h"
#include "FairInputKeyMappingParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairInputKeyMappingData.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairInputKeyMappingData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairInputKeyMappingParam> m_KeyMappingParam;
    
public:
    UFairInputKeyMappingData();
};

