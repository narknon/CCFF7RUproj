#pragma once
#include "CoreMinimal.h"
#include "FairHitSlowParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairHitSlowParamData.generated.h"

UCLASS(Blueprintable)
class UFairHitSlowParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairHitSlowParam> m_HitSlowParam;
    
public:
    UFairHitSlowParamData();
};

