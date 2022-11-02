#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap amogus("SUS");
    FragTrap amogis("SiS");
    
    amogus = amogis;
    amogus.attack("boba");
    amogus.attack("biba");
    amogus.takeDamage(2);
    amogus.beRepaired(1);
    amogus.highFivesGuys();
}
