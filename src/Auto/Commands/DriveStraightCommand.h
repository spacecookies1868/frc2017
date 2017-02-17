#ifndef SRC_DRIVESTRAIGHTCOMMAND_H_
#define SRC_DRIVESTRAIGHTCOMMAND_H_

#include "WPILib.h"
#include <math.h>
#include "RobotModel.h"
#include "Auto/PIDInputSource.h"

class AnglePIDOutput : public frc::PIDOutput {
public:
	AnglePIDOutput();
	void PIDWrite(double output);
	double GetPIDOutput();
	virtual ~AnglePIDOutput();
private:
	double pidOutput_;
};

class DistancePIDOutput : public frc::PIDOutput {
public:
	DistancePIDOutput();
	void PIDWrite(double output);
	double GetPIDOutput();
	virtual ~DistancePIDOutput();
private:
	double pidOutput_;
};

class DriveStraightCommand {
public:
	DriveStraightCommand(NavXPIDSource* navXSource, TalonEncoderPIDSource* talonEncoderSource,
			AnglePIDOutput* anglePIDOutput, DistancePIDOutput* distancePIDOutput, RobotModel* robot,
			double desiredDistance);
	void Init();
	void Update(double currTime, double deltaTime);
	bool IsDone();
	void GetIniValues();
	virtual ~DriveStraightCommand();
private:
	NavXPIDSource *navXSource_;
	TalonEncoderPIDSource *talonEncoderSource_;
	AnglePIDOutput *anglePIDOutput_;
	DistancePIDOutput *distancePIDOutput_;
	PIDController *anglePID_;
	PIDController *distancePID_;
	RobotModel* robot_;

	double rPFac_, rIFac_, rDFac_;
	double dPFac_, dIFac_, dDFac_;
	double initialAngle_;
	double initialAvgDistance_;
	double desiredDistance_;
	double desiredTotalAvgDistance_;
	double leftMotorOutput_, rightMotorOutput_;
	bool isDone_;
};

#endif /* SRC_DRIVESTRAIGHTCOMMAND_H_ */
