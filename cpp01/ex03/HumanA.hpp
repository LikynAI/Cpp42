#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

#ifndef HUMAN_A
# define HUMAN_A
class HumanA
{
    public:
	    HumanA(std::string name, Weapon& type);
	    void attack(void);
	
    private:
    	std::string name;
	    Weapon &weapon;
};
#endif