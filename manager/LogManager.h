#ifndef __LOG_MANAGER__
#define __LOG_MANAGER__

#include <stdio.h>

#include "Manager.h"

#define LOGFILE_NAME "k9.log"
#define MAX_LOG_CHAR_LENGTH 256
#define SHOW_LOG_TIMESTAMP true

class LogManager : public Manager {

 private:
  LogManager();
  LogManager(LogManager const&);
  void operator = (LogManager const&);
  bool do_flush;
  bool show_timestamp;
  FILE *p_f;

 public:
  ~LogManager();

 static LogManager &getInstance();
  int startUp (bool flush=false);
  void shutDown();
  int writeLog(const char *fmt, ...);
};

#endif
