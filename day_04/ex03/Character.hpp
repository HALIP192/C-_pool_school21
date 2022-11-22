#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter{
    protected:
        const static int INVENTORY_SIZE = 4;
        std::string character_name;
        int equiped_slots;
        AMateria *inventory[INVENTORY_SIZE];
    public:
        Character(const std::string &name);
        Character(const Character &copy);
        ~Character();
        Character &operator=(const Character &obj);

        virtual std::string const &getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);
};
#endif
