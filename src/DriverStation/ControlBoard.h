#ifndef SRC_CONTROLBOARD_H_
#define SRC_CONTROLBOARD_H_

#include "WPILib.h"
#include "Ports2017.h"
#include "DriverStation/ButtonReader.h"
#include "DriverStation/RemoteControl.h"

class ControlBoard : public RemoteControl {
public:
	/**
	 * ControlBoard constructor
	 * sets leftJoy_, rightJoy_, operatorJoy_, operatorJoyB_
	 * initializes drivDirectionButton, gearShiftButton, arcadeDriveButton, quickTurnButton
	 * sets reverseDriveDesired_, gearShiftDesired_, arcadeDriveDesired_, quickTurnDesired_ to false
	 */
	ControlBoard();

	/**
	 * Sets leftJoyX_, leftJoyY_, rightJoyX_, rightJoyY_
	 * Sets drivetrain and superstructure variables (desired)
	 */
	void ReadControls();

	/**
	 * Sets currAutoMode_ based on switches
	 */
	void ReadAutoSwitches();

	/**
	 * returns rightJoy_ and leftJoy_ values
	 * @param j a Joystick
	 * @param a a Axes
	 */
	double GetJoystickValue(Joysticks j, Axes a);

	// Drive controller button accessors
	/**
	 * @return true if reserveDriveDesired_
	 */
	bool GetReverseDriveDesired();
	/**
	 * @return true if gear shift is desired
	 */
	bool GetHighGearDesired();
	/**
	 * @return true if arcade drive is desired
	 */
	bool GetArcadeDriveDesired();
	/**
	 * @return true if quick turn is desired
	 */
	bool GetQuickTurnDesired();
	/**
	 * @returns true if align with peg is desired in Teleop
	 */
	bool GetAlignWithPegDesired();

	//Superstructure button accessors
	bool GetFlywheelDesired();
//	bool GetGearIntakeDesired();
	bool GetIntakeDesired();
	bool GetClimberDesired();
	bool GetReverseIntakeDesired();
	bool GetReverseFeederDesired();
	bool GetGearMechOutDesired();
	double GetFlywheelVelAdjust();
	bool GetGearCameraDesired();
	bool GetGearIntakeUpDesired();
	bool GetGearIntakeDownDesired();
	bool GetGearDeployDesired();
	bool GetGearIntakeDesired();
	bool GetGearOuttakeDesired();
	bool GetGearIntakeAdjustUpDesired();
	bool GetGearIntakeAdjustDownDesired();

	//Auto state accessors
	bool GetLeftAutoDesired();
	bool GetRightAutoDesired();
	bool GetMiddleAutoDesired();
	int GetAutoModeDesired();

	/**
	 * Destructor
	 */
	virtual ~ControlBoard();

private:
	enum autoModes {
				kBlank, kDriveStraight, kLeftLift, kMiddleLift, kRightLift, kLeftLiftAndShoot, kRightLiftAndShoot
			};

	// Desired values for driving and pivoting
	double leftJoyX_, leftJoyY_, leftJoyZ_, rightJoyX_, rightJoyY_, rightJoyZ_;

	// Flywheel Velocity dial
	double flywheelVelAdjust_;

	// Boolean values for drive
	bool reverseDriveDesired_, highGearDesired_, arcadeDriveDesired_, quickTurnDesired_, alignWithPegDesired_;

	// Boolean values for superstructure
	bool flywheelDesired_, intakeDesired_, climberDesired_, reverseIntakeDesired_, reverseFeederDesired_, gearMechOutDesired_, cameraSwitchDesired_,
		gearCameraDesired_, gearIntakeUpDesired_, gearIntakeDownDesired_, gearDeployDesired_, gearIntakeDesired_, gearOuttakeDesired_,
		gearIntakeAdjustUpDesired_, gearIntakeAdjustDownDesired_;

	bool leftAutoDesired_, middleAutoDesired_, rightAutoDesired_;
	int currAutoMode_, lastAutoMode_;

	Joystick *leftJoy_, *rightJoy_, *operatorJoy_, *operatorJoyB_;

	// Buttons for drive
	ButtonReader *driveDirectionButton_, *gearShiftButton_, *arcadeDriveButton_, *quickTurnButton_, *alignWithPegButton_;

	// Buttons for superstructure
	ButtonReader *flywheelSwitch_, *intakeSwitch_, *climberSwitch_, *reverseIntakeButton_, *reverseFeederButton_, *gearMechOutButton_,
				 *gearSwitchButton_, *gearIntakeUpButton_, *gearIntakeDownButton_, *gearDeployButton_, *gearIntakeButton_,
				 *gearOuttakeButton_, *gearIntakeAdjustUpButton_, *gearIntakeAdjustDownButton_;

	// Buttons for auto
	ButtonReader *leftAutoSwitch_, *middleAutoSwitch_, *rightAutoSwitch_;

	void ReadAllButtons();
};

#endif /* SRC_CONTROLBOARD_H_ */
