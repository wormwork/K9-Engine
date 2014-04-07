/*
* LogManager.h
*/

// Engine Includes
#include "../utility.h"
#include "LogManager.h"

LogManager::LogManager() {
  startUp();
}

LogManager::~LogManager()
{
  
}

LogManager &LogManager::getInstance()
{
  static LogManager log_manager;
  return log_manager;
}

int LogManager::startUp(bool flush)
{
  show_timestamp = SHOW_LOG_TIMESTAMP;

  if (flush)
  {
    do_flush = flush;
  }
  
  p_f = fopen (LOGFILE_NAME, "w");

  if (p_f == NULL)
  {
    // can't open log file. could be permissions.
    printf("Error opening logfile...\n");
    return 1;
  }

  is_started = true;
  return 0;
}

void LogManager::shutDown()
{
  LogManager &log_manager = LogManager::getInstance();
  log_manager.writeLog("LogManager::shutDown() > Shutting down LogManager, and closing file pointer.");

  if (p_f != NULL)
  {
    fclose (p_f);
  }

  is_started = false;
}

int LogManager::writeLog(const char *fmt, ...)
{
  if (show_timestamp)
  {
    //pre-append time
    fputs(getTimeString(), p_f);
  }

  char buffer[MAX_LOG_CHAR_LENGTH];

  // add trailing \n
  strcpy (buffer, fmt);
  strcat (buffer, "\n");

  va_list args;
  va_start(args, fmt);
  vfprintf(p_f, buffer, args);
  va_end(args);

  if (do_flush) {
    fflush(p_f);
  }
  return 0;
}
