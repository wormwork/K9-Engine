#ifndef __RESOURCE_MANAGER__
#define __RESOURCE_MANAGER__

#include <stdio.h>

#include "Manager.h"


class ResourceManager: public Manager
{

private:
	ResourceManager();
	ResourceManager(ResourceManager const&);
	void operator =(ResourceManager const&);

public:
	~ResourceManager();
	static ResourceManager &getInstance();
	int startUp(bool flush = false);
	void shutDown();
};

#endif
