#pragma once
#include "CoreMinimal.h"
#include "FairCharaDamageReactionInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairCharaDamageReactionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllAttackReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMoveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnAttacker;
    
    FAIR_API FFairCharaDamageReactionInfo();
};

