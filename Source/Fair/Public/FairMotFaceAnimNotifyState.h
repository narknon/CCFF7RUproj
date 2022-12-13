#pragma once
#include "CoreMinimal.h"
#include "FairBattleFaceCharaType.h"
#include "FairBattleFaceType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FairMotFaceAnimNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotFaceAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattleFaceCharaType CharaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairBattleFaceType FaceType;
    
    UFairMotFaceAnimNotifyState();
};

