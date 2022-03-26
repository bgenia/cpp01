#include <iostream>

#include <Zombie.hpp>
#include <termutils.hpp>

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

void randomChump(std::string name)
{
    Zombie stack_zombie(name);

    stack_zombie.announce();
}

int main()
{
    Zombie* heap_zombie = newZombie("Дима");

    heap_zombie->announce();

    randomChump("Стас");

    delete heap_zombie;
}
