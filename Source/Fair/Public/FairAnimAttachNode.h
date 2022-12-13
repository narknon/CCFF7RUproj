#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "FairAnimAttachNode.generated.h"

USTRUCT(BlueprintType)
struct FAIR_API FFairAnimAttachNode : public FAnimNode_ModifyBone {
    GENERATED_BODY()
public:
    FFairAnimAttachNode();
};

