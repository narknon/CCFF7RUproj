#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairShaderAnimListDataTableRow.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct FFairShaderAnimListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IncludedMeshFilePathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* BaseSkeleton;
    
    FAIR_API FFairShaderAnimListDataTableRow();
};

