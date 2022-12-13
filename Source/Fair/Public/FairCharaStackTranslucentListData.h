#pragma once
#include "CoreMinimal.h"
#include "FairCharaStackTranslucentInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaStackTranslucentListData.generated.h"

UCLASS(Blueprintable)
class UFairCharaStackTranslucentListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaStackTranslucentInfo> m_CharaStackTranslucentInfoList;
    
public:
    UFairCharaStackTranslucentListData();
};

