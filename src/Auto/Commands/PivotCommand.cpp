/*
 * PivotCommand.cpp
 *
 *  Created on: Feb 2, 2017
 *      Author: Lynn D
 */

#include <Auto/Commands/PivotCommand.h>

PivotCommand::PivotCommand(RobotModel *robot, double desiredAngle, bool isAbsolutePosition, NavXPIDSource* navXSource) {
	navXSource_ = navXSource;
	initYaw_ = navXSource_->CalculateAccumulatedYaw();

	if (isAbsolutePosition){
		desiredDeltaAngle_ = CalculateDeltaAngle(desiredAngle);
	} else {
		desiredDeltaAngle_ = desiredAngle;
	}

	isDone_ = false;

	robot_ = robot;
	talonOutput_ = new PivotPIDTalonOutput(robot_);

	pivotCommandStartTime_ = robot_->GetTime();

//	GetIniValues();
	// TODO ADD BACK IN !!!
	pivotPID_ = new PIDController(0.09, 0.0, 0.06, navXSource_, talonOutput_);
}

void PivotCommand::GetIniValues() {
	pFac_ = robot_->pini_->getf("PIVOT PID", "pFac", 0.0);
	iFac_ = robot_->pini_->getf("PIVOT PID", "iFac", 0.0);
	dFac_ = robot_->pini_->getf("PIVOT PID", "dFac", 0.0);
	minDrivePivotOutput_ = robot_->pini_->getf("PIVOT PID", "minDrivePivotOutput", 0.0);
	printf("PIVOT COMMAND p: %f, i: %f, d: %f\n", pFac_, iFac_, dFac_);
}

void PivotCommand::Init() {
	initYaw_ = navXSource_->PIDGet();
	pivotPID_->SetSetpoint(initYaw_ + desiredDeltaAngle_);
	pivotPID_->SetContinuous(false);
	pivotPID_->SetOutputRange(-0.8, 0.8);	// TODO probably lessen bc too OP
	pivotPID_->SetAbsoluteTolerance(1.0);	// TODO should check
	pivotPID_->Enable();

	SmartDashboard::PutNumber("Initial yaw", initYaw_);
	isDone_ = false;
}

void PivotCommand::Reset() {
	pivotPID_->Reset();
	pivotPID_->Disable();
	isDone_ = true;
	free(pivotPID_);

	printf("IS DONE FROM RESET\n");
}

void PivotCommand::Update(double currTimeSec, double deltaTimeSec) {
	SmartDashboard::PutNumber("Pivot Error", pivotPID_->GetError());
	SmartDashboard::PutNumber("Setpoint", pivotPID_->GetSetpoint());
	SmartDashboard::PutNumber("Delta setpoint", pivotPID_->GetDeltaSetpoint());
	SmartDashboard::PutBoolean("Is done", isDone_);

	bool timeOut = (robot_->GetTime() - pivotCommandStartTime_ > 1.5);		// TODO test

	SmartDashboard::PutBoolean("Timed out", timeOut);

	if (pivotPID_->OnTarget() 		// && (fabs(talonOutput_->GetOutput()) < minDrivePivotOutput_)
		|| timeOut) {
		pivotPID_->Reset();
		pivotPID_->Disable();
		isDone_ = true;

		printf("IS DONE \n");
		if (timeOut) {
			printf("FROM TIME OUT\n");
		}
	}
}

bool PivotCommand::IsDone() {
	return isDone_;
}

double PivotCommand::CalculateDeltaAngle(double desiredAngle) {
	double currYaw = fmod(initYaw_, 360.0);
	return desiredAngle - currYaw;
}

PivotCommand::~PivotCommand() {
	pivotPID_->Reset();
	pivotPID_->Disable();
	isDone_ = true;
	free(pivotPID_);

	printf("IS DONE FROM DECONSTRUCTOR\n");
}

PivotPIDTalonOutput::PivotPIDTalonOutput(RobotModel *robot){
	robot_ = robot;
	output_ = 0.0;
}

void PivotPIDTalonOutput::PIDWrite(double myOutput){
	output_ = myOutput;
	// one side is already mechanically inverted, so we don't need to negate the output of the wheels
	robot_->SetDriveValues(RobotModel::kLeftWheels, -output_);
	robot_->SetDriveValues(RobotModel::kRightWheels, output_);

//	printf("in PID write\n");
//	printf("left output: %f\n", -output);
//	printf("right output: %f\n", output);

	SmartDashboard::PutNumber("left output", -output_);
	SmartDashboard::PutNumber("right output", output_);
}

double PivotPIDTalonOutput::GetOutput() {
	return output_;
}

PivotPIDTalonOutput::~PivotPIDTalonOutput(){

}
