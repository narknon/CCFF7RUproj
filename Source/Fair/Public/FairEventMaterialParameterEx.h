#pragma once
#include "CoreMinimal.h"
#include "FairEyeParameter.h"
#include "FairEyelashParameter.h"
#include "FairMouthParameter.h"
#include "FairBodyParameter.h"
#include "FairSkinParameter.h"
#include "FairHairParameter.h"
#include "FairWholeBodyParameter.h"
#include "GameFramework/Actor.h"
#include "FairEventMaterialParameterEx.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class FAIR_API AFairEventMaterialParameterEx : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetObjNameWhenParentingFails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairEyeParameter EyeParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairEyelashParameter EyelashParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairMouthParameter MouthParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairBodyParameter BodyParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairSkinParameter SkinParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairHairParameter HairParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairWholeBodyParameter WholeBodyParameter;
    
public:
    AFairEventMaterialParameterEx();
};

