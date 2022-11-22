#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice: public AMateria {
public:
    Ice();
    Ice(const Ice &copy);
    ~Ice();
    Ice &operator=(const Ice &a);
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};
#endif
