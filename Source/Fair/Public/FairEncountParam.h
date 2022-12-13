#pragma once
#include "CoreMinimal.h"
#include "EFairEncountAreaMaterial.h"
#include "FairEncountSceneInfo.h"
#include "FairEncountParam.generated.h"

USTRUCT(BlueprintType)
struct FFairEncountParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 SceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairEncountAreaMaterial AreaMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEncountSceneInfo> SceneInfos;
    
    FAIR_API FFairEncountParam();
};

