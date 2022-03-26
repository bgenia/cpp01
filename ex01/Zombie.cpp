#include <iostream>
#include <memory>

#include <Zombie.hpp>

#include <logutils.hpp>

Zombie::Zombie(const std::string& name_) : name(name_)
{
    LOG_FUNCTION_SA(TERM_F_RGB(0, 255, 0), name);
}

Zombie::~Zombie()
{
    LOG_FUNCTION_SA(TERM_FAINT TERM_F_RGB(0, 255, 0), name);
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
