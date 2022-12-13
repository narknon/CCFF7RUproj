#pragma once
#include "CoreMinimal.h"
#include "EFairAutoSaveIgnoreDirection.h"
#include "FairAutoSaveIgnoreList.generated.h"

USTRUCT(BlueprintType)
struct FFairAutoSaveIgnoreList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 PrevMapID;
    
    UPROPERTY(EditAnywhere)
    uint32 NextMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFairAutoSaveIgnoreDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryCount;
    
    FAIR_API FFairAutoSaveIgnoreList();
};

