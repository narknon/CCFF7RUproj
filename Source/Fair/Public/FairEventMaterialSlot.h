#pragma once
#include "CoreMinimal.h"
#include "FairEventMaterialSlotElement.h"
#include "GameFramework/Actor.h"
#include "FairEventMaterialSlot.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class FAIR_API AFairEventMaterialSlot : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetObjNameWhenParentingFails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFairEventMaterialSlotElement> ElementList;
    
public:
    AFairEventMaterialSlot();
};

