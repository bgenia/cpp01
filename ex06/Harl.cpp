#include <iostream>

#include <Harl.hpp>

const std::string Harl::LOGGER_TYPES[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

Harl::Harl()
{
    loggerFunctions[0] = &Harl::debug;
    loggerFunctions[1] = &Harl::info;
    loggerFunctions[2] = &Harl::warning;
    loggerFunctions[3] = &Harl::error;
}

void Harl::complain(std::string level)
{
    int logger_index = -1;

    for (int i = 0; i < 4; i++)
        if (LOGGER_TYPES[i] == level)
            logger_index = i;

    if (logger_index == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

        return;
    }

    for (; logger_index < 4; logger_index++)
    {
        logger_t logger = loggerFunctions[logger_index];

        (this->*logger)();
    }
}

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."
        "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free."
        "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
