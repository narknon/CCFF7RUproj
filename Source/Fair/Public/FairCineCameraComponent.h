#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "FairCineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FAIR_API UFairCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FilmOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FilmOffsetY;
    
    UFairCineCameraComponent();
    UFUNCTION(BlueprintCallable)
    void SetUnrealFilmOffsetY(float offset_y);
    
    UFUNCTION(BlueprintCallable)
    void SetUnrealFilmOffsetX(float offset_x);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmOffsetY(float offset_y);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmOffsetX(float offset_x);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnrealFilmOffsetY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnrealFilmOffsetX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFilmOffsetY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFilmOffsetX();
    
};

