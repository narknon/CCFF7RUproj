#pragma once
#include "CoreMinimal.h"
#include "FairEndCreditsData.h"
#include "ZDataTableDataAssetBase.h"
#include "FairEndCreditsDataList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairEndCreditsDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEndCreditsData> mFairEndCreditsData;
    
public:
    UFairEndCreditsDataList();
};

