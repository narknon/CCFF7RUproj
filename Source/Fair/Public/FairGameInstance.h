#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FairGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class FAIR_API UFairGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UFairGameInstance();
};

