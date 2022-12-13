#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FairSaveGame.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> buf;
    
public:
    UFairSaveGame();
};

