#pragma once

#include <string>

class Zombie
{
public:
    Zombie(const std::string& name_);
    ~Zombie();

    void announce() const;

private:
    const std::string name;
};
