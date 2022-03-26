#pragma once

#include <iostream>
#include <termutils.hpp>

#define LOG_FUNCTION \
    do { std::cout << __PRETTY_FUNCTION__ << std::endl; } while (false)

#define LOG_FUNCTION_A(ARG) \
    do { std::cout << __PRETTY_FUNCTION__ << ": " << ARG << std::endl; } while (false)

#define LOG_FUNCTION_S(STYLE) \
    do { std::cout << STYLE << __PRETTY_FUNCTION__ << TERM_RESET << std::endl; } while (false)

#define LOG_FUNCTION_SA(STYLE, ARG) \
    do { std::cout << STYLE << __PRETTY_FUNCTION__ << ": " << ARG << TERM_RESET << std::endl; } while (false)
