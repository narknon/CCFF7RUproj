#pragma once
#include "CoreMinimal.h"
#include "InfoRequiredForChrBinding.h"
#include "FairTempParamWhenChrBind.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairLevelSequenceManager.generated.h"

class AFairGmChrActor;
class ALevelSequenceActor;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class FAIR_API UFairLevelSequenceManager : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* m_levelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* m_levelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfoRequiredForChrBinding> m_infoRequiredForChrBindingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFairGmChrActor*, FFairTempParamWhenChrBind> m_bindingChrActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFairGmChrActor*> m_unboundChrActorWithCopiedParam;
    
public:
    UFairLevelSequenceManager();
    UFUNCTION(BlueprintCallable)
    void EndLevelSequence();
    
};

