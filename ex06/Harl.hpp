#pragma once

#include <string>

class Harl
{
public:
    typedef void (Harl::*logger_t)();

    Harl();

    void complain(std::string level);

private:
    void debug();
    void info();
    void warning();
    void error();

    logger_t loggerFunctions[4];

    static const std::string LOGGER_TYPES[4];
};
