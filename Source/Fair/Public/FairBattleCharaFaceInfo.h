#pragma once
#include "CoreMinimal.h"
#include "FairBattleFaceCharaType.h"
#include "FairBattleFaceAnimeInfo.h"
#include "FairBattleCharaFaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleCharaFaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattleFaceCharaType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairBattleFaceAnimeInfo> FaceAnimeInfo;
    
    FAIR_API FFairBattleCharaFaceInfo();
};

