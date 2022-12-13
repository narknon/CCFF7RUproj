#pragma once
#include "CoreMinimal.h"
#include "EFairAdlibVoiceLanguage.h"
#include "FairAdlibVoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FFairAdlibVoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairAdlibVoiceLanguage voice_language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString voice_id;
    
    FAIR_API FFairAdlibVoiceInfo();
};

