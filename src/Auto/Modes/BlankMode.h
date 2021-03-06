#ifndef SRC_AUTO_MODES_BLANKMODE_H_
#define SRC_AUTO_MODES_BLANKMODE_H_

#include "Auto/Modes/AutoMode.h"

class BlankMode : public AutoMode {
public:
	BlankMode();
	void CreateQueue();
	void Init();
	void RefreshIni();
	virtual ~BlankMode();
};

#endif /* SRC_AUTO_MODES_BLANKMODE_H_ */
