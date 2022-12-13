#pragma once
#include "CoreMinimal.h"
#include "FairCharacterLightParameter.h"
#include "GameFramework/Volume.h"
#include "ZCharacterLightVolume.generated.h"

UCLASS(Blueprintable)
class FAIR_API AZCharacterLightVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairCharacterLightParameter CharacterLightParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Unbound;
    
    AZCharacterLightVolume();
};

