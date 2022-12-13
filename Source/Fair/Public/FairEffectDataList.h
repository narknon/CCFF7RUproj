#pragma once
#include "CoreMinimal.h"
#include "FairFep.h"
#include "ZDataTableDataAssetBase.h"
#include "FairEffectDataList.generated.h"

UCLASS(Blueprintable)
class UFairEffectDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairFep> m_effectDataList;
    
public:
    UFairEffectDataList();
};

