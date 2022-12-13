#pragma once
#include "CoreMinimal.h"
#include "EFairEncountAreaMaterial.h"
#include "Engine/DataTable.h"
#include "FairEncountSceneInfo.h"
#include "FairEncountParamDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairEncountParamDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SceneNo;
    
    UPROPERTY(EditAnywhere)
    uint32 SceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairEncountAreaMaterial AreaMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEncountSceneInfo> SceneInfos;
    
    FAIR_API FFairEncountParamDataTableRow();
};

