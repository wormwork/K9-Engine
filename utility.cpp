/*
* utility.cpp
*/

// System Includes
#include <time.h>
#include <stdio.h>

char *getTimeString() {
	static char time_str[30];

	time_t timer;
	time(&timer);
	struct tm *p_time = localtime(&timer);

	sprintf(time_str, "%02d:%02d:%02d ", p_time->tm_hour, p_time->tm_min, p_time->tm_sec);

	return time_str;
}
