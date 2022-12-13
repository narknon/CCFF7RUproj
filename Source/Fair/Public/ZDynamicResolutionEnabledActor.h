#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZDynamicResolutionEnabledActor.generated.h"

UCLASS(Blueprintable)
class FAIR_API AZDynamicResolutionEnabledActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsDynamicResolutionEnabled;
    
public:
    AZDynamicResolutionEnabledActor();
};

