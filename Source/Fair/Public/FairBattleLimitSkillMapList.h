#pragma once
#include "CoreMinimal.h"
#include "FairBattleLimitSkillMapList.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleLimitSkillMapList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pl_sp_start_asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pl_sp_start2_asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString pl_sp_blank1a_asset_path;
    
    FAIR_API FFairBattleLimitSkillMapList();
};

