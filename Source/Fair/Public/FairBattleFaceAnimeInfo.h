#pragma once
#include "CoreMinimal.h"
#include "FairBattleFaceType.h"
#include "FairBattleFaceAnimeInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFairBattleFaceAnimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattleFaceType FaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EyeAnimeSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LipAnimeSequence;
    
    FAIR_API FFairBattleFaceAnimeInfo();
};

