#pragma once
#include "CoreMinimal.h"
#include "FairBattleShaderAnimeInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFairBattleShaderAnimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ShaderAnimeSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FAIR_API FFairBattleShaderAnimeInfo();
};

