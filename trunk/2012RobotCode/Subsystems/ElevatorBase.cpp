#include "ElevatorBase.h"
#include "../Robotmap.h"

ElevatorBase::ElevatorBase() : Subsystem("ElevatorBase") {
	
}
    
void ElevatorBase::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void ElevatorBase::moveElevator(elevatorMode mode)
{
	
}

bool ElevatorBase::isBallSlot1()
{
	return false;
}

bool ElevatorBase::isBallSlot2()
{
	return false;
}

bool ElevatorBase::isBallSlot3()
{
	return false;
}

bool ElevatorBase::isBallDetected()
{
	return false;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
