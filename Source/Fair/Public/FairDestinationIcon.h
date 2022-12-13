#pragma once
#include "CoreMinimal.h"
#include "FairDestinationStoryData.h"
#include "UObject/Object.h"
#include "FairDestinationIcon.generated.h"

UCLASS(Blueprintable)
class UFairDestinationIcon : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairDestinationStoryData m_StoryData;
    
public:
    UFairDestinationIcon();
};

