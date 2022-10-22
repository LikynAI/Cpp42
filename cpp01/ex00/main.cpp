#include "Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("z1");
    z1->announce();
    Zombie *z2 = new Zombie("z2");
    z2->announce();
    Zombie z3 = Zombie("z3");
    z3.announce();
    randomChump("z4");
    delete(z1);
    delete(z2);
}
