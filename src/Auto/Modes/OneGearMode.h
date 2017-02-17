#ifndef SRC_AUTO_MODES_ONEGEARMODE_H_
#define SRC_AUTO_MODES_ONEGEARMODE_H_

#include "Auto/Modes/AutoMode.h"
#include "Auto/Commands/PathCommand.h"
#include "Auto/Commands/AutoCommand.h"
#include <Auto/Commands/AlignWithPegCommand.h>
#include "Auto/PIDInputSource.h"
#include "RobotModel.h"

class OneGearMode : public AutoMode {
public:
	/**
	 * Constructs new AlignWithPegCommand
	 * @param robot a RobotModel
	 */
	OneGearMode(RobotModel *robot, NavXPIDSource *navXSource, TalonEncoderPIDSource *talonSource);
	virtual ~OneGearMode();
	void CreateQueue();
	/**
	 * Initializes AlignWithPegCommand and sets currentCommand to firstCommand
	 */
	void Init(); 	// to put in AutoMode
	//void Update(double currTimeSec, double deltaTimeSec);
	void RefreshIni();
	bool IsDone();
private:
	RobotModel *robot_;
	AutoCommand *firstCommand_;
	PathCommand *liftPath_;
	AlignWithPegCommand *alignWithPegCommand_;

	NavXPIDSource *navXSource_;
	TalonEncoderPIDSource *talonSource_;
};

#endif /* SRC_AUTO_MODES_ONEGEARMODE_H_ */
