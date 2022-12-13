#pragma once
#include "CoreMinimal.h"
#include "FairMapAreaBoxDataList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairMapAreaBoxList.generated.h"

UCLASS(Blueprintable)
class UFairMapAreaBoxList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMapAreaBoxDataList> m_mapAreaBoxList;
    
public:
    UFairMapAreaBoxList();
};

