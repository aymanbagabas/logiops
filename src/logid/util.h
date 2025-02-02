#ifndef UTIL_H
#define UTIL_H

#include "Actions.h"

enum LogLevel
{
   DEBUG,
   INFO,
   WARN,
   ERROR
};

extern LogLevel global_verbosity;

void log_printf(LogLevel level, const char* format, ...);

const char* level_prefix(LogLevel level);

Direction get_direction(int x, int y);
Direction string_to_direction(std::string s);
GestureMode string_to_gesturemode(std::string s);
Action string_to_action(std::string s);
LogLevel string_to_loglevel(std::string s);

#endif //UTIL_H