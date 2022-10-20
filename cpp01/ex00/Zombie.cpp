#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name=name;
}

Zombie::~Zombie(void)
{
    std::cout << "[" << name << "] " << "die.\n";
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}