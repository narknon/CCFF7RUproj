#pragma once
#include "CoreMinimal.h"
#include "AtomListenerFocusPointInfo.generated.h"

class USceneComponent;
class AActor;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomListenerFocusPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionLevel;
    
    FAtomListenerFocusPointInfo();
};

