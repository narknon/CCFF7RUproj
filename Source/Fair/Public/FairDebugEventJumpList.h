#pragma once
#include "CoreMinimal.h"
#include "FairDebugEventJumpInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairDebugEventJumpList.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairDebugEventJumpList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FFairDebugEventJumpInfo> m_debugEventJumpInfo_Map;
    
public:
    UFairDebugEventJumpList();
};

