#include "Util.h"

void Log::LogInfo(const std::string &log)
{
    std::cout << "[INFO]" << log << "\n";
}

void Log::LogDebug(const std::string &log)
{
    #ifdef DEBUG
    std::cout << "[DEBUG]" << log << "\n";
    #endif
}

void Log::LogError(const std::string &log)
{
    std::cout << "[ERROR]" << log << "\n";
}
