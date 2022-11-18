#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
    protected:
        ScavTrap(void);
        const std::string isName(void);
    public:
        ScavTrap(const ScavTrap &obj);
        ScavTrap(const std::string &_name);
        ~ScavTrap(void);

        ScavTrap    &operator=(const ScavTrap &obj);

        void guardGate(void);
};

#endif
