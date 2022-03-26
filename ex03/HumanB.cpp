#include <cstdlib>
#include <iostream>

#include <HumanB.hpp>

HumanB::HumanB(const std::string& name_)
    : name(name_),
      weapon(NULL)
{

}

void HumanB::setWeapon(const Weapon& weapon_) {
    weapon = &weapon_;
}

void HumanB::attack() {
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
