#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	this->weapon = weapon_name;
}

Weapon::Weapon()
{
	
}

std::string Weapon::getType(void)
{
	return (weapon);
}

void Weapon::setType(const std::string &weapon_name)
{
	this->weapon = weapon_name;
}