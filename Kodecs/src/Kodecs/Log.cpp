#include "kdspch.h"
#include "Log.h"  
#include "spdlog/sinks/stdout_color_sinks.h" 

namespace Kodecs {

    // Define static members for the core and client loggers
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    
    void Log::Init() {

        // Set the log pattern format (timestamp, log level, message)
        spdlog::set_pattern("%^[%T] %n: %v%$");

        // Initialize the core logger with colored output
        s_CoreLogger = spdlog::stdout_color_mt("KODECS");
        s_CoreLogger->set_level(spdlog::level::trace); // Set log level to trace for detailed logging

        // Initialize the client logger with colored output
        s_ClientLogger = spdlog::stdout_color_mt("APP");
        s_ClientLogger->set_level(spdlog::level::trace); // Set log level to trace for detailed logging
    }
}
