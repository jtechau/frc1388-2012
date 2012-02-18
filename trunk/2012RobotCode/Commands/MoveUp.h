#ifndef MOVEUP_H
#define MOVEUP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Davey
 */
class MoveUp: public CommandBase {
private:
	Timer timer;
	int targetslot;
public:
	MoveUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
