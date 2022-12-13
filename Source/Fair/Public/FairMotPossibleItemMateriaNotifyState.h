#pragma once
#include "CoreMinimal.h"
#include "FairMotPossibleNotifyStateBase.h"
#include "FairMotPossibleItemMateriaNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FAIR_API UFairMotPossibleItemMateriaNotifyState : public UFairMotPossibleNotifyStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isChainMateria;
    
    UFairMotPossibleItemMateriaNotifyState();
};

