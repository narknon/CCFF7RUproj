#include "AtomCueSheetLoaderComponent.h"

class UObject;
class USoundAtomCueSheet;

void UAtomCueSheetLoaderComponent::LoadAtomCueSheet(UObject* WorldContextObject, TSoftObjectPtr<USoundAtomCueSheet> Asset, UAtomCueSheetLoaderComponent::FOnAtomCueSheetLoaded OnLoaded, FLatentActionInfo LatentInfo) {
}

void UAtomCueSheetLoaderComponent::Load() {
}

EAtomCueSheetLoaderComponentStatus UAtomCueSheetLoaderComponent::GetStatus() {
    return EAtomCueSheetLoaderComponentStatus::Stop;
}

USoundAtomCueSheet* UAtomCueSheetLoaderComponent::GetAtomCueSheet() {
    return NULL;
}

UAtomCueSheetLoaderComponent::UAtomCueSheetLoaderComponent() {
    this->BinderComponent = NULL;
    this->CueSheet = NULL;
}

