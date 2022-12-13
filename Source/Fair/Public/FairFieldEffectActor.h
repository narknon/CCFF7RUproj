#pragma once
#include "CoreMinimal.h"
#include "FairEffectBaseActor.h"
#include "FairFieldEffectActor.generated.h"

UCLASS(Blueprintable)
class FAIR_API AFairFieldEffectActor : public AFairEffectBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Attachment;
    
    AFairFieldEffectActor();
};

