#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{ }

const std::string DiamondTrap::isName(void)
{
    return "DiamondTrap";
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj)
{
    std::cout << "DiamondTrap copy constr called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &_name)
: ClapTrap(_name + "_clap_trap"), name(_name)
{
    hit_points = 100;
    energy_points = 50;
    attack_dmg = 30;
    std::cout << isName() + " " << DiamondTrap::name << " is created" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << isName() + " " + name + " is destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    name = obj.name;
    ScavTrap::operator=(obj);
    return *this;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << isName() + " " + name << std::endl;
    std::cout << ClapTrap::isName() + " " + ClapTrap::name << std::endl;
}
