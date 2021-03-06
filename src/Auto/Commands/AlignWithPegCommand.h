#ifndef SRC_AUTO_COMMANDS_ALIGNWITHPEGCOMMAND_H_
#define SRC_AUTO_COMMANDS_ALIGNWITHPEGCOMMAND_H_

#include "RobotModel.h"
#include "Auto/Commands/PivotCommand.h"
#include "Auto/Commands/DriveStraightCommand.h"
#include "Auto/PIDInputSource.h"
#include <zmq.hpp>
#include <zhelpers.hpp>
#include <string>
#include <chrono>
#include <thread>
#include <memory>
#include <fstream>
#include <iostream>
#ifndef _WIN32
#include <unistd.h>
#else
#include <windows.h>

#define sleep(n)    Sleep(n)
#endif

using namespace std;

class AlignWithPegCommand : public AutoCommand {
public:
	/**
	 * Constructor for AlignWithPegCommand
	 * @param robot a RobotModel
	 */
	AlignWithPegCommand(RobotModel *robot, NavXPIDSource *navXSource, TalonEncoderPIDSource *talonSource, bool isDriveStraightDesired);

	/**
	 * Sets pivotCommandIsDone_ to true, sets pivotDeltaAngle_ to 0, and isDone_ to false
	 */
	void Init();

	/**
	 * If angle is less than 1 than set isDone to true, else, prints to SmartDashboard and continues updating
	 * @param currTimeSec a double that contains time in seconds
	 * @param deltaTimeSec a double that contains update interval
	 */
	void Update(double currTimeSec, double deltaTimeSec);
	void ReadFromJetson();
	void RefreshIni();
	bool IsDone();
	virtual ~AlignWithPegCommand();

private:
//	zmq::context_t *angleContext_; //(1);
//	zmq::socket_t *angleSubscriber_;
//
//	zmq::context_t *distanceContext_; //(1);
//	zmq::socket_t *distanceSubscriber_;

	zmq::context_t *context_;
	zmq::socket_t *subscriber_;

//	void ReadUpdateFromJetson();

	RobotModel *robot_;

	NavXPIDSource *navXSource_;
	TalonEncoderPIDSource *talonSource_;
	AnglePIDOutput *angleOutput_;
	DistancePIDOutput *distanceOutput_;

	PivotCommand *pivotCommand_;
	DriveStraightCommand *driveStraightCommand_;

	double desiredPivotDeltaAngle_;
	double desiredDistance_;

	enum AlignState {
		kPivotToAngleInit, kPivotToAngleUpdate, kDriveStraightInit, kDriveStraightUpdate
	};

	uint32_t currState_;
	uint32_t nextState_;

	bool isDone_;

	int numTimesInkPivotToAngleInit;
	int numTimesInkDriveStraightInit;

	double timeStartForVision_, timeStartForAlignWithPegCommand_;

	bool isDriveStraightDesired_;

	//ifstream visionLog_;
};

#endif /* SRC_AUTO_COMMANDS_ALIGNWITHPEGCOMMAND_H_ */
