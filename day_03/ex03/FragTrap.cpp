#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{ }

const std::string FragTrap::isName(void)
{
    return "FragTrap";
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
    std::cout << "Copy ctor in FragTrap was called" << std::endl;
}

FragTrap::FragTrap(const std::string &_name)
: ClapTrap(_name)
{
    hit_points = 100;
    energy_points = 50;
    attack_dmg = 20;
    std::cout << isName() << " " << name << " is created" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << isName() << " " << name << " is destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << isName() + " " + name + " say HIGH FIVES GUYS" << std::endl;
}
