#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairCharaNameListToShareAnimDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaNameListToShareAnimDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SharingSourceCharaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharaNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCharaCategoryDifferent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SharingSourceCharaCategoryName;
    
    FAIR_API FFairCharaNameListToShareAnimDataTableRow();
};

