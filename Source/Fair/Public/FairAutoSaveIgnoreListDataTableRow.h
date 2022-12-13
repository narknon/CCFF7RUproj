#pragma once
#include "CoreMinimal.h"
#include "EFairAutoSaveIgnoreDirection.h"
#include "Engine/DataTable.h"
#include "FairAutoSaveIgnoreListDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFairAutoSaveIgnoreListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 PrevMapID;
    
    UPROPERTY(EditAnywhere)
    uint32 NextMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairAutoSaveIgnoreDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    FAIR_API FFairAutoSaveIgnoreListDataTableRow();
};

