#ifndef __GRAPHICS_MANAGER__
#define __GRAPHICS_MANAGER__

#include "Manager.h"

class GraphicsManager: public Manager
{

private:
	GraphicsManager();
	GraphicsManager(GraphicsManager const&);
	void operator =(GraphicsManager const&);

public:
	~GraphicsManager();

	static GraphicsManager &getInstance();
	int startUp(bool fullscreen=true);
	void shutDown();

	static void handleKeypress(unsigned char key, int x, int y);
	static void handleResize(int w, int h);
	void initRendering();
	static void drawScene();
};

#endif
