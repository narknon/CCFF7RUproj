#include "MovieSceneAtomSectionTemplate.h"

FMovieSceneAtomSectionTemplate::FMovieSceneAtomSectionTemplate() {
    this->AtomSection = NULL;
}

FMovieSceneAtomSectionTemplate::FMovieSceneAtomSectionTemplate(const UMovieSceneAtomSection& Section,
	const UMovieSceneAtomTrack& Track)
{
	AtomSection = NULL;
}