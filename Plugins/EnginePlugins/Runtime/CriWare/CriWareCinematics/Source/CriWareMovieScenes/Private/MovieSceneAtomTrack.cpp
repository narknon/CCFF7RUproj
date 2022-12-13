#include "MovieSceneAtomTrack.h"
#include "MovieSceneAtomSectionTemplate.h"

UMovieSceneAtomTrack::UMovieSceneAtomTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneAtomTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneAtomSectionTemplate(*CastChecked<const UMovieSceneAtomSection>(&InSection), *this);
}
