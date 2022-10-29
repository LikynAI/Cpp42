#pragma once
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap &copy);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &src);
    void highFivesGuys();
};