#include <iostream>

#include <Harl.hpp>

int main(int argc, char **argv)
{
    Harl harl;

    if (argc > 1)
        harl.complain(argv[1]);
    else
        std::cerr << "Bruh" << std::endl;
}
