#pragma once
#include "CoreMinimal.h"
#include "FairCharaNameListToShareAnim.h"
#include "ZDataTableDataAssetBase.h"
#include "FairCharaNameListToShareAnimData.generated.h"

UCLASS(Blueprintable)
class UFairCharaNameListToShareAnimData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairCharaNameListToShareAnim> m_CharaNameListToShareAnim;
    
public:
    UFairCharaNameListToShareAnimData();
};

