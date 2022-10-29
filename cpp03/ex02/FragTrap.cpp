#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "unknown";
    energy = 100;
    damage = 30;
    health = 150;
    type  = "FragTrap";
    std::cout << type << " " << name<< " has been created\n";
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    energy = 100;
    damage = 30;
    health = 150;
    type  = "FragTrap";
    std::cout << type << " " << name<< " has been created\n";
}

FragTrap::FragTrap(FragTrap &copy)
{
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << type<< " " << name << " UUUUUUUU\n";
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    name = src.name;
    energy = src.energy;
    damage = src.damage;
    health = src.health;
    type = src.type;
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << type << " " << name << " HIGH FIVE!!!\n";
}