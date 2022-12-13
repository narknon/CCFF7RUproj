#pragma once
#include "CoreMinimal.h"
#include "FairEncountParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairEncountParamData.generated.h"

UCLASS(Blueprintable)
class UFairEncountParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEncountParam> m_EncountParam;
    
public:
    UFairEncountParamData();
};

