#pragma once
#include "CoreMinimal.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleSortOrder.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleSortOrder : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortOrder;
    
public:
    UParticleModuleSortOrder();
};

