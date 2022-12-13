#pragma once
#include "CoreMinimal.h"
#include "FairBattleShaderAnimeParam.h"
#include "ZDataTableDataAssetBase.h"
#include "FairBattleShaderAnimeParamData.generated.h"

UCLASS(Blueprintable)
class UFairBattleShaderAnimeParamData : public UZDataTableDataAssetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleShaderAnimeParam> m_BattleShaderAnimeParam;
    
public:
    UFairBattleShaderAnimeParamData();
};

