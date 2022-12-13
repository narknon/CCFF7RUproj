#pragma once
#include "CoreMinimal.h"
#include "FieldEffectAttachMode.h"
#include "GameFramework/Volume.h"
#include "ZFieldAttachEffectVolume.generated.h"

class AFairFieldEffectActor;

UCLASS(Blueprintable)
class FAIR_API AZFieldAttachEffectVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AFairFieldEffectActor>> effects;
    
    UPROPERTY(EditAnywhere)
    FieldEffectAttachMode attachMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unbound;
    
    AZFieldAttachEffectVolume();
};

