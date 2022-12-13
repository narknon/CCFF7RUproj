#pragma once
#include "CoreMinimal.h"
#include "EFairEmitterStyle.h"
#include "GameFramework/Actor.h"
#include "FairSoundEmitter.generated.h"

class USoundAtomCueSheet;
class UFairSoundPoolObject;
class UBoxComponent;
class USphereComponent;

UCLASS(Blueprintable)
class FAIR_API AFairSoundEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeInTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairSoundPoolObject* pPoolObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* Sphere;
    
public:
    AFairSoundEmitter();
    UFUNCTION(BlueprintCallable)
    void SetUpEmitter(EFairEmitterStyle emitterStyle, UBoxComponent* NewBox, USphereComponent* NewSphere);
    
};

