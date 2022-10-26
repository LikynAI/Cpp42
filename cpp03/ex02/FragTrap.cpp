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
    type  = "FragTrap";
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (energy > 0 && health > 0)
    {
        energy--;
        std::cout << type << " " << name << " attacks WITH FURIUS ANGER " << target << " causing " << damage << " points of damage!\n";
    }
    else
        std::cout << type << " " << name << " is out of energy or health.\n";
}

void FragTrap::highFivesGuys()
{
    std::cout << type << " " << name << " HIGH FIVE!!!\n";
}