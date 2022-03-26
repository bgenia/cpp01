#pragma once

#include <string>

#include <Weapon.hpp>

class HumanB
{
public:
    HumanB(const std::string& name_);

    void setWeapon(const Weapon& weapon_);

    void attack();

private:
    const std::string name;
    const Weapon* weapon;
};
