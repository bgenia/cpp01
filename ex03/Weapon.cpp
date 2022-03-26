#include <Weapon.hpp>

Weapon::Weapon(const std::string& type_)
    : type(type_)
{

}

std::string Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string &type_)
{
    type = type_;
}
