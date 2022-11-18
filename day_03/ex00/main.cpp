#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap    dev("Devid");
    ClapTrap    jen("Jenya");
    ClapTrap    kos("Kostya");

    for (int i = 0; i < 11; ++i)
        dev.beRepaired(1);
    for (int i = 0; i < 6; ++i)
        jen.takeDamage(2);
    jen.attack("Kostya");
    kos.attack("Jenya");

    return 0;
}
