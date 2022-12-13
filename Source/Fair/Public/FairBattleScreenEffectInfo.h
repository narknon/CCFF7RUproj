#pragma once
#include "CoreMinimal.h"
#include "FairBattleScreenEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairBattleScreenEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScreenEffectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    FAIR_API FFairBattleScreenEffectInfo();
};

