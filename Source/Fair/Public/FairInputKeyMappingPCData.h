#pragma once
#include "CoreMinimal.h"
#include "FairInputKeyMappingPCParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairInputKeyMappingPCData.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairInputKeyMappingPCData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairInputKeyMappingPCParam> m_KeyMappingPCParam;
    
public:
    UFairInputKeyMappingPCData();
};

