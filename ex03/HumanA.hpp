#pragma once

#include <string>

#include <Weapon.hpp>

class HumanA
{
public:
    HumanA(const std::string& name, const Weapon& weapon);

    void attack();

private:
    const std::string name;
    const Weapon& weapon;
};
