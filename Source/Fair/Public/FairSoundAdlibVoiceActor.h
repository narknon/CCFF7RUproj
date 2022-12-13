#pragma once
#include "CoreMinimal.h"
#include "FairAdlibVoiceInfo.h"
#include "GameFramework/Actor.h"
#include "FairSoundAdlibVoiceActor.generated.h"

UCLASS(Blueprintable)
class FAIR_API AFairSoundAdlibVoiceActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairAdlibVoiceInfo> m_AdlibVoiceInfoList;
    
public:
    AFairSoundAdlibVoiceActor();
    UFUNCTION(BlueprintCallable)
    void PlayAdlibVoice(const FString& voice_id);
    
};

