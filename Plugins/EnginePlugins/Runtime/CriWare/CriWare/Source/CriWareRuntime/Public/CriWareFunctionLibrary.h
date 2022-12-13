#pragma once
#include "CoreMinimal.h"
#include "ECriWareSpeakerSystem.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CriWareFunctionLibrary.generated.h"

class USoundAtomCueSheet;
class USoundAtomCue;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UCriWareFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCriWareFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, const TArray<float>& Angles);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalLabelToSelectorByName(const FString& SelectorName, const FString& LabelName);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameVariableByName(const FString& GameVariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USoundAtomCue*> SearchAtomCuesInAssetRegistry(const USoundAtomCueSheet* CueSheet);
    
};

