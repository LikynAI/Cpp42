#include "Zombie.hpp"
#include <iostream>

int main()
{
    int size;
    std::cin >> size;
    Zombie *horde = zombieHorde(size, "BraiiiiiiinnnzzzZ...");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[](horde);
}
