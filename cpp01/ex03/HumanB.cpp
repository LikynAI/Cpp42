#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}