#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FairLocalizedKeyboardType.h"
#include "FairInputKey.h"
#include "FairInputDeviceType.h"
#include "ZGameInstanceSubsystemBase.h"
#include "FairInput.generated.h"

class UFairInputKeyMappingPCData;
class UFairInputKeyMappingData;

UCLASS(Blueprintable)
class FAIR_API UFairInput : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FairInputKey, FKey> m_convertKeyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairInputKeyMappingData* m_defaultPadKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairInputKeyMappingPCData* m_defaultKeyboardKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFairInputKeyMappingPCData* m_defaultDebugKeyboardKeyMap;
    
    UPROPERTY(EditAnywhere)
    FairInputKey m_CurrentPadKeyMap[126];
    
    UPROPERTY(EditAnywhere)
    FairInputKey m_CurrentKeyboardMainKeyMap[126];
    
    UPROPERTY(EditAnywhere)
    FairInputKey m_CurrentKeyboardSubKeyMap[126];
    
    UPROPERTY(EditAnywhere)
    FairInputKey m_CurrentKeyboardMouseKeyMap[126];
    
    UPROPERTY(EditAnywhere)
    FairInputKey m_CurrentDebugKeyboardMainKeyMap[126];
    
    UPROPERTY(EditAnywhere)
    FairInputKey m_CurrentDebugKeyboardSubKeyMap[126];
    
    UPROPERTY(EditAnywhere)
    FairInputDeviceType m_currentDeviceType;
    
    UPROPERTY(EditAnywhere)
    FairInputDeviceType m_padDeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInitpadDeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_moveMouseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_moveMouseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_oldMouseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_oldMouseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnableMouseCameraMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mouseMoveCameraScaleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mouseMoveCameraScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_keyboardLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FairLocalizedKeyboardType m_keyboardType;
    
public:
    UFairInput();
};

