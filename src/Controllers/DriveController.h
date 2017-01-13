#ifndef SRC_CONTROLLERS_DRIVECONTROLLER_H_
#define SRC_CONTROLLERS_DRIVECONTROLLER_H_

#include "WPILib.h"
#include "RobotModel.h"
extern "C" {
#include <pathfinder/pathfinder.h>
}

class DriveController {
public:
	DriveController(RobotModel* myRobot);
	void Init();
	void Update(double currTimeSec, double deltaTimeSec);	// TODO, currently empty
	void ArcadeDrive(double myX, double myY);				// TODO, currently empty
	void FollowTrajectory(TrajectoryCandidate trajectoryCandidate);	// gets called in PathCommand::Update(double, double)
	bool IsDoneFollowingTrajectory();											// gets called in PathCommand::IsDone()
	~DriveController();

private:
	// TODO add switch statement for drive states
	RobotModel *robot;
	CANTalon *leftMaster, *leftSlave, *rightMaster, *rightSlave;		// TODO move all talon and encoder stuff into RobotModel (or not)
	Encoder *leftEncoder, *rightEncoder;
};

#endif /* SRC_CONTROLLERS_DRIVECONTROLLER_H_ */
