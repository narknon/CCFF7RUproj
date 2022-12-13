#pragma once
#include "CoreMinimal.h"
#include "EZPlatformFamily.h"
#include "EZPlatformType.h"
#include "EZPlatformHardware.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ZPlatform.generated.h"

UCLASS(Blueprintable)
class UZPlatform : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UZPlatform();
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformTypeName(EZPlatformType PlatformType);
    
    UFUNCTION(BlueprintCallable)
    static EZPlatformType GetPlatformType();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformHardwareName(EZPlatformHardware PlatformHardware);
    
    UFUNCTION(BlueprintCallable)
    static EZPlatformHardware GetPlatformHardware();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformFamilyName(EZPlatformFamily PlatformFamily);
    
    UFUNCTION(BlueprintCallable)
    static EZPlatformFamily GetPlatformFamily();
    
};

