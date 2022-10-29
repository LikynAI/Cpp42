#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

#ifndef HUMAN_B
# define HUMAN_B
class HumanB
{
    public:
	    HumanB(std::string name);
	    void attack(void);
        void setWeapon(Weapon *weapon);
	
    private:
    	std::string name;
	    Weapon *weapon;
};
#endif