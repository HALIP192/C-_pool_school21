#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iostream>
# include "ICharacter.hpp"

class AMateria{
    protected:
        std::string _type;
    public:
        AMateria(std::string const &type);
        virtual ~AMateria();
        std::string const &getType() const;
        
        AMateria &operator=(const AMateria &obj);
        virtual AMateria* clone() const = 0;
        virtual void use (ICharacter &target);
};

#endif
