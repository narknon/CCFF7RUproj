#pragma once
#include "CoreMinimal.h"
#include "EZTargetComponentType.h"
#include "Components/ActorComponent.h"
#include "ZMapTextureStreamingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FAIR_API UZMapTextureStreamingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZTargetComponentType targetComponentType;
    
    UZMapTextureStreamingComponent();
};

