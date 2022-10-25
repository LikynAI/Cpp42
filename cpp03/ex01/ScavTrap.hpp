#pragma once
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &copy);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &src);
    void attack(const std::string& target);
    void guardGate();
};