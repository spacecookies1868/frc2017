#ifndef SRC_AUTO_COMMANDS_PATHCOMMAND_H_
#define SRC_AUTO_COMMANDS_PATHCOMMAND_H_

#include <Auto/MotionProfiling/LeftLift_MotionProfile.h>
#include <Auto/MotionProfiling/MiddleLift_MotionProfile.h>
#include <Auto/MotionProfiling/MotionProfileExecutor.h>
#include <Auto/MotionProfiling/RightLift_MotionProfile.h>
#include "WPILib.h"
#include "Auto/Commands/AutoCommand.h"
#include "Auto/MotionProfiling/MotionProfile.h"
#include "Auto/MotionProfiling/HighGoalAfterLeftLift_MotionProfile.h"
#include "Auto/MotionProfiling/HighGoalAfterRightLift_MotionProfile.h"
#include "RobotModel.h"
extern "C" {
#include <pathfinder/pathfinder.h>
}

class PathCommand : public AutoCommand {
public:
	enum Path { kLeftLift, kMiddleLift, kRightLift, kHighGoalAfterLeftLift, kHighGoalAfterRightLift };

	/**
	 * Constructor that generates a PathCommand
	 * @param robot a RobotModel
	 * @param Path a path of waypoints generated by motion profile
	 */
	PathCommand(RobotModel *robot, Path path);
	~PathCommand();

	void Init();
	void Update(double currTimeSec, double deltaTimeSec);
	bool IsDone();

	void ClearMotionProfile();

private:
	RobotModel *robot_;
	Path path_;

//	int lengthOfLeftMotionProfile_, lengthOfRightMotionProfile_;
//	double leftMotionProfile_[][3], rightMotionProfile_[][3];
//	double leftPFac_, leftIFac_, leftDFac_, leftFFac_;
//	double rightPFac_, rightIFac_, rightDFac_, rightFFac_;
//	MotionProfileExecutor *leftMotionProfileExecutor_, *rightMotionProfileExecutor_;

	float p1_x_, p1_y_, p1_r_;
	float p2_x_, p2_y_, p2_r_;
	float p3_x_, p3_y_, p3_r_;
	float p4_x_, p4_y_, p4_r_;

	Segment *leftTrajectory_, *rightTrajectory_;

	int trajectoryLength_;

	EncoderFollower *leftEncoderFollower_, *rightEncoderFollower_;
	EncoderConfig leftEncoderConfig_, rightEncoderConfig_;

	int pointLength_;
	bool isDone_;

	int leftEncoderPosition_;
	int rightEncoderPosition_;
};

#endif /* SRC_AUTO_COMMANDS_PATHCOMMAND_H_ */
