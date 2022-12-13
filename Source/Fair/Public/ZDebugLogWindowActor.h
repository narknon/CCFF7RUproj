#pragma once
#include "CoreMinimal.h"
#include "ZImGuiActorBase.h"
#include "ZDebugLogWindowActor.generated.h"

UCLASS(Blueprintable)
class FAIR_API AZDebugLogWindowActor : public AZImGuiActorBase {
    GENERATED_BODY()
public:
    AZDebugLogWindowActor();
};

