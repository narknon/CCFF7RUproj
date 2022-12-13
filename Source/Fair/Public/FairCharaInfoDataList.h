#pragma once
#include "CoreMinimal.h"
#include "CharaInfo.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaInfoDataList.generated.h"

UCLASS(Blueprintable)
class UFairCharaInfoDataList : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaInfo> m_CharaInfo;
    
public:
    UFairCharaInfoDataList();
};

