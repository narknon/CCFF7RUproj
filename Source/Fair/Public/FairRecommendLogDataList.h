#pragma once
#include "CoreMinimal.h"
#include "FairRecommendList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairRecommendLogDataList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairRecommendLogDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairRecommendList> m_RecommendList;
    
public:
    UFairRecommendLogDataList();
};

