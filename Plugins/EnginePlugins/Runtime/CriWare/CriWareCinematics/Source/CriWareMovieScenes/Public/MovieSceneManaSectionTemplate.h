#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneManaSectionParams.h"
#include "MovieSceneManaTrack.h"
#include "MovieSceneManaSection.h"
#include "MovieSceneManaSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneManaSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneManaSectionParams Params;
    
public:
    CRIWAREMOVIESCENES_API FMovieSceneManaSectionTemplate();
	FMovieSceneManaSectionTemplate(const UMovieSceneManaSection& Section, const UMovieSceneManaTrack& Track);
	virtual ~FMovieSceneManaSectionTemplate() = default;
};

