#include "WPILib.h"
#include "RobotModel.h"
#include "Controllers/DriveController.h"
#include "Controllers/SuperstructureController.h"
#include "Auto/AutoController.h"
#include "Auto/Modes/AutoMode.h"
#include "Auto/Modes/BlankMode.h"
#include "Auto/Modes/OneGearMode.h"
#include "Auto/Modes/OneGearHighShootMode.h"
#include "Logger.h"
#include <string.h>

class MainProgram : public IterativeRobot {
	RobotModel *robot_;
	ControlBoard *humanControl_;
	DriveController *driveController_;
	SuperstructureController *superstructureController_;
	AutoController *autoController_;

	NavXPIDSource *navXSource_;
	TalonEncoderPIDSource *talonEncoderSource_;

	double currTimeSec_, lastTimeSec_, deltaTimeSec_;
	int lastAutoMode_, currAutoMode_;

public:
	void RobotInit() {
		ResetTimerVariables();
		robot_ = new RobotModel();
		humanControl_ = new ControlBoard();

		navXSource_ = new NavXPIDSource(robot_);
		talonEncoderSource_ = new TalonEncoderPIDSource(robot_);

		driveController_ = new DriveController(robot_, humanControl_, navXSource_, talonEncoderSource_);
		superstructureController_ = new SuperstructureController(robot_, humanControl_);		// TODO
		autoController_ = new AutoController();

		robot_->ZeroNavXYaw();
		Wait(1.0);
		navXSource_->ResetAccumulatedYaw();

		CameraServer::GetInstance()->StartAutomaticCapture();
		humanControl_->ReadAutoSwitches();
		currAutoMode_ = humanControl_->GetAutoModeDesired();
		lastAutoMode_ = currAutoMode_;

		printf("First auto mode: %d\n", currAutoMode_);
	}

	void AutonomousInit() {
		ResetTimerVariables();
		ResetControllers();
		robot_->SetHighGear();
//		robot_->SetLowGear();
		robot_->SetGearMech(true);

		//int kAutoMode = robot_->pini_->geti("AUTO MODE", "autoMode", 0);
		enum autoModes {
			kBlank, kDriveStraight, kLeftLift, kMiddleLift, kRightLift, kLeftLiftAndShoot, kRightLiftAndShoot
		};

		AutoMode *autoMode;
		int kAutoMode;

		//getting auto modes from switches
		kAutoMode = humanControl_->GetAutoModeDesired();

		printf("Auto Mode: %d\n", kAutoMode);
		/* ------------------ AUTO MODES ------------------ (TO IMPLEMENT SOME)
		 * 0 BLANK
		 *
		 * 1 DRIVE STRAIGHT (uses DriveStraightCommand)
		 *
		 * 2 LEFT LIFT (mp + vision)
		 * 3 MIDDLE LIFT (mp + vision)
		 * 4 RIGHT LIFT (mp + vision)
		 *
		 * 5 LEFT LIFT (mp + vision) AND SHOOT (mp + vision)
		 * 6 RIGHT LIFT (mp + vision) AND SHOOT (mp + vision)
		 * ------------------------------------------------
		 */

		switch(kAutoMode) {
		case kBlank :
			autoMode = new BlankMode();
			break;
		case kDriveStraight :	// TODO change this
			autoMode = new BlankMode();
			break;
		case kLeftLift :
			autoMode = new OneGearMode(robot_, navXSource_, talonEncoderSource_, kAutoMode);
			break;
		case kMiddleLift :
			autoMode = new OneGearMode(robot_, navXSource_, talonEncoderSource_, kAutoMode);
			break;
		case kRightLift :
			autoMode = new OneGearMode(robot_, navXSource_, talonEncoderSource_, kAutoMode);
			break;
		case kLeftLiftAndShoot :
			autoMode = new OneGearHighShootMode(robot_, superstructureController_, navXSource_, talonEncoderSource_, true);
			break;
		case kRightLiftAndShoot :
			autoMode = new OneGearHighShootMode(robot_, superstructureController_, navXSource_, talonEncoderSource_, false);
			break;
		default :
			//autoMode = new OneGearHighShootMode(robot_, superstructureController_, navXSource_, talonEncoderSource_, true);
			autoMode = new BlankMode();
			break;
		}
		autoController_->SetAutonomousMode(autoMode);
		autoController_->Init();
	}

	void AutonomousPeriodic() {
		UpdateTimerVariables();
		robot_->SetHighGear();
		if (!autoController_->IsDone()) {
			autoController_->Update(currTimeSec_, deltaTimeSec_);
		}
		SmartDashboard::PutNumber("NavX angle", robot_->GetNavXYaw());
		driveController_->PrintDriveValues();

		Logger::LogState(robot_, humanControl_, deltaTimeSec_);
	}

	void TeleopInit() {
		robot_->SetDriveValues(RobotModel::kAllWheels, 0.0);
		ResetControllers();
		robot_->SetHighGear();
		robot_->SetPercentVBusDriveMode();		// THIS SHOULD ALREADY BE IN RESET CONTROLLERS
	}

	void TeleopPeriodic() {
//		robot_->SetDriveValues(RobotModel::kAllWheels, 1.0);

// TODO PUT THIS BACK IN
		humanControl_->ReadControls();
		driveController_->Update(currTimeSec_, deltaTimeSec_);
		superstructureController_->Update(currTimeSec_, deltaTimeSec_);
//		SmartDashboard::PutNumber("Gear Mech Encoder", robot_->GetGearPivotEncoder()->Get());
//		SmartDashboard::PutNumber("Gear Mech Limit Switch", robot_->GetLimitSwitchState());
//		SmartDashboard::PutNumber("Gear Pivot Output", robot_->GetGearPivotMotor()->Get());
// TODO PUT THIS BACK IN

//		// for testing purposes, to take out
//		if (!robot_->GetLimitSwitchState()) {
//			robot_->GetGearIntakeEncoder()->Reset();
//		}

//		if(humanControl_->GetGearCameraDesired()) {
//			SmartDashboard::PutString("Camera", "Gear");
////			server.SetSource(gearCamera);
//		} else {
//			SmartDashboard::PutString("Camera", "Climb");
////			server.SetSource(climbCamera);
//		}
		// Logs state of robot
		//Logger::LogState(robot_, humanControl_, deltaTimeSec_);
	}

	void TestInit() {
		ResetControllers();
	}

	void TestPeriodic() {
		SmartDashboard::PutNumber("Flywheel Velocity", robot_->GetFlywheelEncoder()->GetRate());
		SmartDashboard::PutNumber("Flywheel Distance", robot_->GetFlywheelEncoder()->GetDistance());
		SmartDashboard::PutNumber("Flywheel Pulses", robot_->GetFlywheelEncoder()->GetRaw());
	}

	void DisabledInit() {
		std::string timestamp = Logger::GetTimeStamp("/home/lvuser/FRC_UserProgram.log");
		std::string copyCommand = "cp /home/lvuser/FRC_UserProgram.log /U/FRC_UserProgram_ " + timestamp + ".log";
		//system((char*)copyCommand);
		system("cp /home/lvuser/FRC_UserProgram.log /U");
	}

	void DisabledPeriodic() {
		robot_->SetPercentVBusDriveMode();
		robot_->SetDriveValues(RobotModel::kAllWheels, 0.0);
		robot_->ClearMotionProfileTrajectories();
		driveController_->PrintDriveValues();
		humanControl_->ReadAutoSwitches();

		lastAutoMode_ = currAutoMode_;
		currAutoMode_ = humanControl_->GetAutoModeDesired();

		if (lastAutoMode_ != currAutoMode_) {
			printf("AUTO MODE: %d", currAutoMode_);
		}
		SmartDashboard::PutNumber("Flywheel Velocity", robot_->GetFlywheelEncoder()->GetRate());
		SmartDashboard::PutNumber("Flywheel Distance", robot_->GetFlywheelEncoder()->GetDistance());
		SmartDashboard::PutNumber("Flywheel Pulses", robot_->GetFlywheelEncoder()->GetRaw());
		SmartDashboard::PutNumber("Flywheel Dial Value", humanControl_->GetFlywheelVelAdjust());

		SmartDashboard::PutNumber("LeftJoy Y", humanControl_->GetJoystickValue(ControlBoard::kLeftJoy, ControlBoard::kY));
		SmartDashboard::PutNumber("RightJoy X", humanControl_->GetJoystickValue(ControlBoard::kRightJoy, ControlBoard::kX));

		SmartDashboard::PutNumber("Gear Pivot Encoder", robot_->GetGearPivotEncoder()->Get());
//		SmartDashboard::PutNumber("Gear Mech Limit Switch", robot_->GetLimitSwitchState());
//		SmartDashboard::PutNumber("Gear Pivot Output", robot_->GetGearPivotMotor()->Get());

	}

private:
	void ResetTimerVariables() {
		currTimeSec_ = 0.0;
		lastTimeSec_ = 0.0;
		deltaTimeSec_ = 0.0;
	}

	void UpdateTimerVariables() {
		lastTimeSec_ = currTimeSec_;
		currTimeSec_ = robot_->GetTime();
		deltaTimeSec_ = currTimeSec_ - lastTimeSec_;
	}

	void ResetControllers() {
		autoController_->Reset();
		driveController_->Reset();
		superstructureController_->Reset();
		RefreshIni();
	}

	void RefreshIni() {
		robot_->RefreshIni();	// TODO move
		superstructureController_->RefreshIni();
		autoController_->RefreshIni();		// TODO put in other method
	}
};

START_ROBOT_CLASS(MainProgram)
