#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{ }

const std::string ScavTrap::isName(void)
{
    return "ScavTrap";
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
    std::cout << "Copy ctor in ScavTrap was called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name)
: ClapTrap(_name)
{
    hit_points = 100;
    energy_points = 50;
    attack_dmg = 20;
    std::cout << isName() << " " << name << " is created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << isName() << " " << name << " is destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    return *this;
}

void ScavTrap::guardGate(void)
{
    std::cout << isName() + " is now in Gate keepr mode" << std::endl;
}
