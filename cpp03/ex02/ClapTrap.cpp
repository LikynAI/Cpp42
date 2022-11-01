#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "unknown";
    energy = 10;
    damage = 10;
    health = 10;
    type  = "ClapTrap";
    std::cout << type << " " << name<< " has been created\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    energy = 10;
    damage = 10;
    health = 10;
    type  = "ClapTrap";
    std::cout << type << " " << name<< " has been created\n";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << type<< " " << name << " died with " << health << "hp and " << energy << " energy\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    name = src.name;
    energy = src.energy;
    damage = src.damage;
    health = src.health;
    type  = "ClapTrap";
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy > 0 && health > 0)
    {
        energy--;
        std::cout << type << " " << name << " attacks " << target << " causing " << damage << " points of damage!\n";
    }
    else
        std::cout << type << " " << name << " is out of energy or health.\n"; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energy > 0 && health > 0)
    {
        energy--;
        std::cout << type << " " << name << " has taken " << amount << " points of damage!\n";
        health -= amount;
    }
    else
        std::cout << type << " " << name << " is out of energy or health.\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy > 0 && health > 0)
    {
        energy--;
        std::cout << type << " " << name << " has been repeared for " << amount << " of health points!\n";
        health += amount;
    }
    else
        std::cout << type << " " << name << " is out of energy or health.\n"; 
}