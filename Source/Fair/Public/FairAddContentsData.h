#pragma once
#include "CoreMinimal.h"
#include "AddContentsData.h"
#include "ZDataTableDataAssetBase.h"
#include "FairAddContentsData.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairAddContentsData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAddContentsData> m_AddContentsDataList;
    
public:
    UFairAddContentsData();
};

