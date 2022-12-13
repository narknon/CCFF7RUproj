#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairMovieInfo_DataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairMovieInfo_DataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 discimgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWhiteStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWhiteFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> skipFrameList;
    
    FAIR_API FFairMovieInfo_DataTableRow();
};

