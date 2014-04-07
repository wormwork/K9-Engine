/*
 * game.cpp
 */

#include "manager/LogManager.h"
#include "manager/GraphicsManager.h"

int main(int argc, char** argv)
{

	LogManager& log_manager = LogManager::getInstance();
	log_manager.writeLog("Test Log...");

	GraphicsManager& graphics_manager = GraphicsManager::getInstance();

	graphics_manager.shutDown();
	log_manager.shutDown();

	return 0;
}
