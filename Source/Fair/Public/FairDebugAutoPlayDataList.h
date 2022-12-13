#pragma once
#include "CoreMinimal.h"
#include "FairDebugAutoPlayInfoList.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDebugAutoPlayDataList.generated.h"

UCLASS(Blueprintable)
class UFairDebugAutoPlayDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDebugAutoPlayInfoList> m_AutoPlayDataList;
    
public:
    UFairDebugAutoPlayDataList();
};

