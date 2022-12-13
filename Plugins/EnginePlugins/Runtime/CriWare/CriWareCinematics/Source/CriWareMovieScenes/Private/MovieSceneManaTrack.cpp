#include "MovieSceneManaTrack.h"
#include "MovieSceneManaSectionTemplate.h"

UMovieSceneManaTrack::UMovieSceneManaTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneManaTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneManaSectionTemplate(*CastChecked<const UMovieSceneManaSection>(&InSection), *this);
}