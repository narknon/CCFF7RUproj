#pragma once
#include "CoreMinimal.h"
#include "FairShaderAnimList.generated.h"

USTRUCT(BlueprintType)
struct FFairShaderAnimList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncludedMeshFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurveNameList;
    
    FAIR_API FFairShaderAnimList();
};

