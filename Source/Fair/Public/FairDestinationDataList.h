#pragma once
#include "CoreMinimal.h"
#include "FairDestinationList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDestinationDataList.generated.h"

UCLASS(Blueprintable)
class UFairDestinationDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDestinationList> m_DestinationList;
    
public:
    UFairDestinationDataList();
};

