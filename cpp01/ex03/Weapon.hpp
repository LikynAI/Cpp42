#include <iostream>
#include <string>

#ifndef WEAPON
# define WEAPON
class Weapon
{
    public:
	    std::string getType(void);
	    void setType(const std::string &name);
	    Weapon(std::string name);
		Weapon();

    private:
	    std::string weapon;
};
# endif