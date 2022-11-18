#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_dmg;

    ClapTrap(void);
    virtual const std::string isName(void);
public:
    ClapTrap(const ClapTrap &obj);
    ClapTrap(const std::string &_name);
    virtual ~ClapTrap(void);

    ClapTrap &operator=(const ClapTrap &obj);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
