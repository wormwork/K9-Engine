/*
* Manager.cpp
*/

// Engine Includes
#include "Manager.h"

Manager::Manager() {
  is_started = false;
}

Manager::~Manager() {
  is_started = false;
}

int Manager::startUp() {
  is_started = true;
  return 0;
}

void Manager::shutDown() {
  is_started = false;
}

bool Manager::isStarted() {
  return is_started;
}
