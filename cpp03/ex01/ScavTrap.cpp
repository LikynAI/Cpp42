#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "unknown";
    energy = 50;
    damage = 20;
    health = 100;
    type  = "ScavTrap";
    std::cout << type << " " << name<< " has been created\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    energy = 50;
    damage = 20;
    health = 100;
    type  = "ScavTrap";
    std::cout << type << " " << name<< " has been created\n";
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << type<< " " << name << " AAAAAAAA\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    name = src.name;
    energy = src.energy;
    damage = src.damage;
    health = src.health;
    type = src.type;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (energy > 0 && health > 0)
    {
        energy--;
        std::cout << type << " " << name << " attacks WITH FURIUS ANGER " << target << " causing " << damage << " points of damage!\n";
    }
    else
        std::cout << type << " " << name << " is out of energy or health.\n";
}

void ScavTrap::guardGate()
{
    std::cout << type << " " << name << " guarding the gate\n";
}