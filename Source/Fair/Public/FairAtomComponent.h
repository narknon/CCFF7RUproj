#pragma once
#include "CoreMinimal.h"
#include "AtomComponent.h"
#include "FairAtomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FAIR_API UFairAtomComponent : public UAtomComponent {
    GENERATED_BODY()
public:
    UFairAtomComponent();
};

