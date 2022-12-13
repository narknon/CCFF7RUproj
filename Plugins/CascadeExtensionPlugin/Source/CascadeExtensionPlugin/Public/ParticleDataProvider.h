#pragma once
#include "CoreMinimal.h"
#include "ParticleProperties.h"
#include "UObject/Interface.h"
#include "ParticleDataProvider.generated.h"

UINTERFACE(Blueprintable)
class CASCADEEXTENSIONPLUGIN_API UParticleDataProvider : public UInterface {
    GENERATED_BODY()
};

class CASCADEEXTENSIONPLUGIN_API IParticleDataProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FParticleProperties UpdateParticle(FParticleProperties currentParticleProperties) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FParticleProperties SpawnParticle(FParticleProperties currentParticleProperties) const;
    
};

