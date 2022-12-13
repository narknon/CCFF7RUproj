#pragma once
#include "CoreMinimal.h"
#include "ForcePoints.h"
#include "UObject/Interface.h"
#include "ForcePointDataProvider.generated.h"

UINTERFACE(Blueprintable)
class CASCADEEXTENSIONPLUGIN_API UForcePointDataProvider : public UInterface {
    GENERATED_BODY()
};

class CASCADEEXTENSIONPLUGIN_API IForcePointDataProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FForcePoints GetForcePoints() const;
    
};

