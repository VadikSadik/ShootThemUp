//  Shoot Them Up Game, All Rights Reserved.


#include "Components/MyCharacterMovementComponent.h"
#include "Player/STUBaseCharacter.h"

float UMyCharacterMovementComponent::GetMaxSpeed() const {
    const float MaxSpeed = Super::GetMaxSpeed();
    const ASTUBaseCharacter* Player = Cast<ASTUBaseCharacter>(GetPawnOwner());
    return Player && Player->IsRunning() ? MaxSpeed * RunModifier: MaxSpeed;
}