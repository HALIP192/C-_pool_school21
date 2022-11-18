#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap: virtual public ClapTrap
{
    protected:
        FragTrap(void);
        const std::string isName(void);
    public:
        FragTrap(const FragTrap &obj);
        FragTrap(const std::string &_name);
        ~FragTrap(void);

        FragTrap    &operator=(const FragTrap &obj);

        void highFivesGuys(void);
};

#endif
