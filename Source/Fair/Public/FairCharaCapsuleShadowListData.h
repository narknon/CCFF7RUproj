#pragma once
#include "CoreMinimal.h"
#include "FairCharaCapsuleShadowInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaCapsuleShadowListData.generated.h"

UCLASS(Blueprintable)
class UFairCharaCapsuleShadowListData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaCapsuleShadowInfo> m_CharaCapsuleShadowInfoList;
    
public:
    UFairCharaCapsuleShadowListData();
};

