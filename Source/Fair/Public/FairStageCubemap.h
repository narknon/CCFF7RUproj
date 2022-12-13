#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FairStageCubemap.generated.h"

class UTextureCube;

UCLASS(Blueprintable)
class FAIR_API AFairStageCubemap : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* Cubemap;
    
public:
    AFairStageCubemap();
};

