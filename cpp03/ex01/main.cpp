#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap amogus("SUS");
    ScavTrap amogis("SiS");
    
    amogus = amogis;
    amogus.attack("boba");
    amogus.attack("biba");
    amogus.takeDamage(2);
    amogus.beRepaired(1);
}