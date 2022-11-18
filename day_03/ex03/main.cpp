#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap *les = new ScavTrap("Lesha");
    FragTrap dev("Devid");
    FragTrap jen("Jenya");
    FragTrap kos("Kostya");
    DiamondTrap loh("Loshara");

    for (int i = 0; i < 11; i++)
        dev.beRepaired(10);
    for (int i = 0; i < 6; i++)
        jen.takeDamage(10);

    jen.attack("Kostya");
    for (int i = 0; i < 101; ++i)
        kos.attack("Jenya");
    loh.attack("Kostya");
    loh.whoAmI();
    jen = kos;
    delete les;
    return 0;
}
