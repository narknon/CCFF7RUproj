#pragma once
#include "CoreMinimal.h"
#include "FairDebugLevelInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDebugLevelList.generated.h"

UCLASS(Blueprintable)
class UFairDebugLevelList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairDebugLevelInfo> m_debugLevelInfoList;
    
public:
    UFairDebugLevelList();
};

