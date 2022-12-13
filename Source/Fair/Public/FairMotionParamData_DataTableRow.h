#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairMotionParam.h"
#include "FairMotionParamData_DataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairMotionParamData_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairMotionParam> MotParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    FAIR_API FFairMotionParamData_DataTableRow();
};

