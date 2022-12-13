#pragma once
#include "CoreMinimal.h"
#include "FairCheckCutInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDebugProcessingLoadCheckCutList.generated.h"

UCLASS(Blueprintable)
class UFairDebugProcessingLoadCheckCutList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCheckCutInfo> m_checkCutList;
    
public:
    UFairDebugProcessingLoadCheckCutList();
};

