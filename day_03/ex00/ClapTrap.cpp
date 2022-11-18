#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{ }

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
}

ClapTrap::ClapTrap(const std::string &_name)
: name(_name), hit_points(10), energy_points(10), attack_dmg(0)
{
    std::cout << "ClapTrap with name: " << name << " is created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap with name: " << name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap " << obj.name << " is copied" << std::endl;
    name = obj.name;
    hit_points = obj.hit_points;
    energy_points = obj.energy_points;
    attack_dmg = obj.attack_dmg;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " have zero energy" << std::endl;
        return ;
    }
    if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " cann't attack, cause he's dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks "<< target << " , causing "<< attack_dmg << " points of damage!" << std::endl;
    energy_points--;
}

void ClapTrap::takeDamage(unsigned int damage)
{
    if (hit_points <= 0)
    {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " get damage(" << damage << ")" << std::endl;
    hit_points -= static_cast<int>(damage);
    if (hit_points <= 0)
        std::cout << "ClapTrap " << name << " is dead now" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points <= 0)
    {
        std::cout << "ClapTrap " << name << " have zero energy" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " repaired (" << amount << ")" << std::endl;
    hit_points += static_cast<int>(amount);
    --energy_points;
}
