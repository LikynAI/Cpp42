#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name=name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
    std::cout << "[" << name << "] " << "die.\n";
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}