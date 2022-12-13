#pragma once
#include "CoreMinimal.h"
#include "ZGameInstanceSubsystemBase.h"
#include "ZGameSpeedSystem.generated.h"

UCLASS(Blueprintable)
class UZGameSpeedSystem : public UZGameInstanceSubsystemBase {
    GENERATED_BODY()
public:
    UZGameSpeedSystem();
    UFUNCTION(BlueprintCallable)
    void SetLayeredGameSpeed(const FName& layer_name, int32 Priority, float game_speed);
    
    UFUNCTION(BlueprintCallable)
    void SetGameSpeed(const FName& Name, float game_speed);
    
    UFUNCTION(BlueprintCallable)
    void ResetGameSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLayeredGameSpeed(const FName& layer_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameSpeedByName(const FName& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameSpeed() const;
    
};

