#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneManaTrack.generated.h"

class UMovieSceneSection;
class UMovieSceneAtomTrack;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneManaTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> ManaSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMovieSceneAtomTrack> SyncedAtomTrack;
    
public:
    UMovieSceneManaTrack();
    
    // Fix for true pure virtual functions not being implemented
};

