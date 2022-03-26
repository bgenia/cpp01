#include <iostream>

#include <Zombie.hpp>
#include <termutils.hpp>

Zombie* zombieHorde(int n, std::string name)
{
    Zombie* zombies = static_cast<Zombie*>(operator new[](sizeof(*zombies) * n));

    for (int i = 0; i < n; i++)
        new(&zombies[i]) Zombie(name);

    return (zombies);
}

void deleteZombies(int n, Zombie* zombies)
{
    for (int i = 0; i < n; i++)
        zombies[i].~Zombie();

    operator delete[](zombies);
}

int main()
{
    int zombie_count;

    std::cin >> zombie_count;

    Zombie* zombies = zombieHorde(zombie_count, "Стас (клон)");

    for (int i = 0; i < zombie_count; i++)
        zombies[i].announce();

    deleteZombies(zombie_count, zombies);
}
