#pragma once
#include "CoreMinimal.h"
#include "LipsyncInfo.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairLipsAtomAnalyzerManager.generated.h"

UCLASS(Blueprintable)
class FAIR_API UFairLipsAtomAnalyzerManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipsyncInfo> m_lipsyncInfo;
    
public:
    UFairLipsAtomAnalyzerManager();
};

