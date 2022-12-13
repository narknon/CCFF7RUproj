#include "CriWareFunctionLibrary.h"

class USoundAtomCueSheet;
class USoundAtomCue;

void UCriWareFunctionLibrary::SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, const TArray<float>& Angles) {
}

void UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(const FString& SelectorName, const FString& LabelName) {
}

void UCriWareFunctionLibrary::SetGameVariableByName(const FString& GameVariableName, float Value) {
}

TArray<USoundAtomCue*> UCriWareFunctionLibrary::SearchAtomCuesInAssetRegistry(const USoundAtomCueSheet* CueSheet) {
    return TArray<USoundAtomCue*>();
}

UCriWareFunctionLibrary::UCriWareFunctionLibrary() {
}

