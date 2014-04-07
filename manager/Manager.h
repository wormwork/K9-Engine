/*
 * Manager.h
 */

#ifndef __MANAGER_H__
#define __MANAGER_H__

class Manager
{

private:

protected:
	bool is_started;

public:
	Manager();
	virtual ~Manager();

	// start up manager
	// return 0 if OK, else negative number
	virtual int startUp();

	// shudown manager
	virtual void shutDown();

	bool isStarted();
};

#endif
