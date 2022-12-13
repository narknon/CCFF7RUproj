#pragma once
#include "CoreMinimal.h"
#include "EZPlatformHardware.h"
#include "FairChrOverwriting.h"
#include "FairChrOverwritingForSwitch.h"
#include "FairChrOverwritingForXbox1.h"
#include "FairGmObjectActor.h"
#include "FairGmChrActor.generated.h"

class USkeletalMeshComponent;
class UFairModelAnimInstance;
class UAnimSequence;

UCLASS(Blueprintable)
class FAIR_API AFairGmChrActor : public AFairGmObjectActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairModelAnimInstance* m_animInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_currentAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTransformControlledByLevelSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBodyAnimControlledByLevelSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairChrOverwriting m_paramOverwriting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairChrOverwritingForSwitch m_paramOverwritingForSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FFairChrOverwritingForXbox1 m_paramOverwritingForXbox1;
    
public:
    AFairGmChrActor();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformHardwareChanged(EZPlatformHardware prevHardware, EZPlatformHardware nextHardware);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedParamForXbox1();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedParamForSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedParam();
    
};

