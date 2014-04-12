/*
 * ResourceManager.h
 */

// Engine Includes
#include "ResourceManager.h"
#include "LogManager.h"

// System Includes
#include <stdarg.h>
#include <string.h>

ResourceManager::ResourceManager()
{
	startUp();
}

ResourceManager::~ResourceManager()
{

}

ResourceManager &ResourceManager::getInstance()
{
	static ResourceManager resource_manager;
	return resource_manager;
}

int ResourceManager::startUp(bool flush)
{
	is_started = true;
	return 0;
}

void ResourceManager::shutDown()
{
	LogManager &log_manager = LogManager::getInstance();
	log_manager.writeLog(
			"ResourceManager::shutDown() > Shutting down ResourceManager.");

	is_started = false;
}
