#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int energy;
    int damage;
    int health;
    std::string type;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &copy);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &src);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

