#pragma once
#include "CoreMinimal.h"
#include "FairAutoSaveIgnoreList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairAutoSaveIgnoreListData.generated.h"

UCLASS(Blueprintable)
class UFairAutoSaveIgnoreListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairAutoSaveIgnoreList> m_IgnroeList;
    
public:
    UFairAutoSaveIgnoreListData();
};

