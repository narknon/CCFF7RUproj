#pragma once
#include "CoreMinimal.h"
#include "BattleShaderAnimeType.h"
#include "FairBattleShaderAnimeInfo.h"
#include "FairBattleScreenEffectInfo.h"
#include "FairBattleShaderAnimeParam.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleShaderAnimeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    BattleShaderAnimeType ShaderAnimeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleShaderAnimeInfo ShaderAnimeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleScreenEffectInfo ScreenEffect;
    
    FAIR_API FFairBattleShaderAnimeParam();
};

