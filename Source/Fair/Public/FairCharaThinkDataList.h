#pragma once
#include "CoreMinimal.h"
#include "CharaThinkInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaThinkDataList.generated.h"

UCLASS(Blueprintable)
class UFairCharaThinkDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaThinkInfo> m_CharaThinkInfo;
    
public:
    UFairCharaThinkDataList();
};

