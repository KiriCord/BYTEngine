#pragma onсe

#include <string>

enum LogType {
    Debug,
    Info,
    Warning,
    Error,
    Fatal_Error
};

class Logger {
    public:
    //return the name Logger instance
    virtual const char* getName() const = 0; 

    //log a message
    virtual void log(LogType type, const std::string& message) = 0;
};