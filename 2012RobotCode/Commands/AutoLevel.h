#ifndef AUTOLEVEL_H
#define AUTOLEVEL_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ag291863
 */
class AutoLevel: public CommandBase {
public:
	AutoLevel();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
