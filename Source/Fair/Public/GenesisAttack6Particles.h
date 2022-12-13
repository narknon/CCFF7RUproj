#pragma once
#include "CoreMinimal.h"
#include "GenesisAttack6Particles.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FGenesisAttack6Particles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> MagicSwordTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> HomingTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> FlashTemplate;
    
    FAIR_API FGenesisAttack6Particles();
};

