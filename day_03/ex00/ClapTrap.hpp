#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_dmg;

    ClapTrap(void);
public:
    ClapTrap(const ClapTrap &obj);
    ClapTrap(const std::string &_name);
    ~ClapTrap(void);

    ClapTrap &operator=(const ClapTrap &obj);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
