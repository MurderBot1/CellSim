#ifndef UTIL_H
#define UTIL_H

#include "Constants.h"

#include <string>
#include <iostream>

namespace Log
{
    static void LogInfo(const std::string& log);
    static void LogDebug(const std::string& log);
    static void LogError(const std::string& log);
}

#endif