#pragma once
#include "CoreMinimal.h"
#include "FairCharaLookAtInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaLookAtListData.generated.h"

UCLASS(Blueprintable)
class UFairCharaLookAtListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaLookAtInfo> m_CharaLookAtInfoList;
    
public:
    UFairCharaLookAtListData();
};

