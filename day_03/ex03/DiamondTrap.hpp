#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap: public ScavTrap, public ClapTrap
{
    private:
        std::string name;
    protected:
        DiamondTrap(void);
        const std::string isName(void);
    public:
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap(const std::string &_name);
        ~DiamondTrap(void);

        DiamondTrap    &operator=(const DiamondTrap &obj);

        void whoAmI(void);
        void attack(const std::string &target);
};

#endif

