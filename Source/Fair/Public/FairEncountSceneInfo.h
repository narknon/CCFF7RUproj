#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FairBattleAreaShapeInfo.h"
#include "FairBattleAreaPopInfo.h"
#include "FairEncountOtherInfo.h"
#include "FairEncountSceneInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairEncountSceneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleAreaShapeInfo BattleAreaShapeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairBattleAreaPopInfo PopInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairEncountOtherInfo OtherInfo;
    
    FAIR_API FFairEncountSceneInfo();
};

