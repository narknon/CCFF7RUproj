#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZImGuiActorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FAIR_API AZImGuiActorBase : public AActor {
    GENERATED_BODY()
public:
    AZImGuiActorBase();
};

