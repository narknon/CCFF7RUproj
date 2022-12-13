#pragma once
#include "CoreMinimal.h"
#include "FairTipsData.h"
#include "ZDataTableDataAssetBase.h"
#include "FairTipsDataList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairTipsDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairTipsData> m_FairTipsData;
    
public:
    UFairTipsDataList();
};

