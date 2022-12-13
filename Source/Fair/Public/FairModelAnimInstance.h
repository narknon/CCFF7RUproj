#pragma once
#include "CoreMinimal.h"
#include "FairModelAnimInstanceProxy.h"
#include "Animation/AnimInstance.h"
#include "FairModelAnimInstance.generated.h"

class UFairAnimNodeDataObject;
class UAnimMontage;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class FAIR_API UFairModelAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentBodyAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentFacialDefaultAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentFacialLipsyncAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentLipAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentLipNoneMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> CurrentLipElementMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentShaderAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CurrentBodyAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PrevBodyAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ApplyAdditiveAnimSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LipNoneAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> LipElementAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFairModelAnimInstanceProxy ModelAnimInstanceProxyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairAnimNodeDataObject* AnimNodeDataObject;
    
public:
    UFairModelAnimInstance();
private:
    UFUNCTION(BlueprintCallable)
    void StopSlotAllAnimation(float InBlendOutTime, FName SlotNodeName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableFacialAndFacialOverride(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsWholeChrEnableFacialAndFacialOverride();
    
};

