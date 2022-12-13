#pragma once
#include "CoreMinimal.h"
#include "LipsAnalyzerBase.h"
#include "LipsAtomAnalyzer.generated.h"

class UAtomComponent;

UCLASS(Blueprintable)
class CRIWAREADXLIPSYNC_API ULipsAtomAnalyzer : public ULipsAnalyzerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
public:
    ULipsAtomAnalyzer();
    UFUNCTION(BlueprintCallable)
    void Detach();
    
    UFUNCTION(BlueprintCallable)
    void Attach(UAtomComponent* InAtomComponent);
    
};

