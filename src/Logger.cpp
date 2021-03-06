#include "Logger.h"
#include "RobotModel.h"

std::ofstream Logger::logData;
std::ofstream Logger::logAction;

double Logger::lastLeftDistance_;
double Logger::lastRightDistance_;

void Logger::LogState(RobotModel* robot, RemoteControl *humanControl, double deltaTimeSec) {
	if (!logData.is_open()) {
		logData.open(GetTimeStamp((std::string("/U/%F_%H_%M_datalog.csv")).c_str()), std::ofstream::out | std::ofstream::app);
		if (!logData.is_open()) {	// if the USB stick is not detected, write log to roborio
			logData.open(GetTimeStamp((std::string("/home/lvuser/%F_%H_%M_datalog.csv")).c_str()), std::ofstream::out | std::ofstream::app);
		}
		logData << "Time, DeltaTime, LeftEncoderValue, RightEncoderValue, LeftDistance, RightDistance, LeftVelocity, Right Velocity, NavXAngle, " <<
				"LeftMotorOutput, RightMotorOutput, LeftJoyX, LeftJoyY, RightJoyX, RightJoyY, HighGear, TotalPower, GearEncoder" << "\r\n";
	}

	logData << robot->GetTime() << ", " <<
			   deltaTimeSec << ", " <<
			   robot->GetDriveEncoderValue(RobotModel::kLeftWheels) << ", " <<
			   robot->GetDriveEncoderValue(RobotModel::kRightWheels) << ", " <<
			   robot->GetLeftDistance() << ", " <<
			   robot->GetRightDistance() << ", " <<
			   (robot->GetLeftDistance() - lastLeftDistance_) / deltaTimeSec << ", " <<
			   (robot->GetRightDistance() - lastRightDistance_) / deltaTimeSec << ", " <<
//			   robot->leftMaster_->GetClosedLoopError() << ", "  <<
//			   robot->rightMaster_->GetClosedLoopError() << ", " <<
//			   robot->leftMaster_->GetSpeed() << ", " <<
//			   robot->rightMaster_->GetSpeed() << ", " <<
			   robot->GetNavXYaw() << ", " <<
			   robot->leftMaster_->Get() << ", " <<
			   robot->rightMaster_->Get() << ", " <<
			   humanControl->GetJoystickValue(RemoteControl::kLeftJoy, RemoteControl::kX) << ", " <<
			   humanControl->GetJoystickValue(RemoteControl::kLeftJoy, RemoteControl::kY) << ", " <<
			   humanControl->GetJoystickValue(RemoteControl::kRightJoy, RemoteControl::kX) << ", " <<
			   humanControl->GetJoystickValue(RemoteControl::kRightJoy, RemoteControl::kY) << ", " <<
			   humanControl->GetHighGearDesired() << ", " <<
			   robot->GetTotalPower() << ", " <<
			   robot->GetGearPivotEncoder()->Get() << ", " << "\r\n";

	logData.flush();

	lastLeftDistance_ = robot->GetLeftDistance();
	lastRightDistance_ = robot->GetRightDistance();
}
/* format:
 * robotmodel state / controlboard state
 *
 * ie:
 *
 * timer / left motor / right motor / gear shift / pdp voltage / leftjoy x / leftjoy y
 * 			/ rightjoy x / rightjoy y / reverse desired / gearshift desired /
 */

/* overloaded methods with time stamp */

void Logger::LogAction(RobotModel* robot, const std::string& fileName, int line,
				const std::string& stateName, double state) {
	logAction.flush();
	if (!logAction.is_open()) {
			logAction.open(GetTimeStamp((std::string("/home/lvuser/%F_%H_%M_actionlog.txt")).c_str()), std::ofstream::out | std::ofstream::app);
	}
	logAction << robot->GetTime() << ", " << fileName << ", " << line << ", " << stateName
			<< ", " << state << "\r\n";
	logAction.flush();
}

void Logger::LogAction(RobotModel* robot, const std::string& fileName, int line,
				const std::string& stateName, const std::string& state) {
	if (!logAction.is_open()) {
			logAction.open(GetTimeStamp((std::string("/home/lvuser/%F_%H_%M_actionlog.txt")).c_str()), std::ofstream::out | std::ofstream::app);
	}
	logAction << robot->GetTime() << ", " << fileName << ", " << line << ", " << stateName
			<< ", " << state << "\r\n";
	logAction.flush();
}

/* overloaded methods without time stamp */
void Logger::LogAction(const std::string& fileName, int line, const std::string& stateName,
			bool state) {
	if (!logData.is_open()) {
		logData.open(GetTimeStamp((std::string("/U/%F_%H_%M_datalog.csv")).c_str()), std::ofstream::out | std::ofstream::app);
		if (!logData.is_open()) {	// if the USB stick is not detected, write log to roborio
			logData.open(GetTimeStamp((std::string("/home/lvuser/%F_%H_%M_datalog.csv")).c_str()), std::ofstream::out | std::ofstream::app);
		}
		logData << "Time, DeltaTime, LeftEncoderValue, RightEncoderValue, LeftDistance, RightDistance, LeftVelocity, Right Velocity, NavXAngle, " <<
				"LeftMotorOutput, RightMotorOutput, LeftJoyX, LeftJoyY, RightJoyX, RightJoyY, HighGear, TotalPower" << "\r\n";
	}

	logAction << fileName << ", " << line << ", " << stateName << ", " << state << "\r\n";
	logAction.flush();
}

void Logger::LogAction(const std::string& fileName, int line, const std::string& stateName,
			double state) {
	if (!logAction.is_open()) {
		logAction.open(GetTimeStamp((std::string("/home/lvuser/%F_%H_%M_actionlog.txt")).c_str()), std::ofstream::out | std::ofstream::app);
	}
	logAction << fileName << ", " << line << ", " << stateName << ", " << state << "\r\n";
	logAction.flush();
}

void Logger::LogAction(const std::string& fileName, int line, const std::string& stateName,
			const std::string& state) {
	if (!logAction.is_open()) {
		logAction.open(GetTimeStamp((std::string("/home/lvuser/%F_%H_%M_actionlog.txt")).c_str()), std::ofstream::out | std::ofstream::app);
	}
	logAction << fileName << ", " << line << ", " << stateName << ", " << state << "\r\n";
	logAction.flush();
}

void Logger::CloseLogs() {
	logData.close();
	logAction.close();
}

std::string Logger::GetTimeStamp(const char* fileName) {
	time_t rawtime = time(0);
	struct tm * timeinfo;	// get current time
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);	// converts time_t to tm as local time
	strftime (buffer, 80, fileName, timeinfo); // fileName contains %F_%H_%M

	return buffer;
}
