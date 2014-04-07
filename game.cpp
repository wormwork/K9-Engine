/*
 * game.cpp
 */

#include "manager/LogManager.h"

int main()
{

	LogManager& log_manager = LogManager::getInstance();

	log_manager.writeLog("Test Log...");

	log_manager.shutDown();

	return 0;
}
