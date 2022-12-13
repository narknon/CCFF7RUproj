#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FairBattleLimitSkillMapListDataTableRow.generated.h"

class ULevelSequence;
class UWorld;

USTRUCT(BlueprintType)
struct FFairBattleLimitSkillMapListDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> main_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> pl_sp_start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> pl_sp_start2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> pl_sp_blank1a;
    
    FAIR_API FFairBattleLimitSkillMapListDataTableRow();
};

