#pragma once

#include <string>

class Weapon
{
public:
    Weapon(const std::string& type_);

    const std::string& getType() const;
    void setType(const std::string &type_);

private:
    std::string type;
};
