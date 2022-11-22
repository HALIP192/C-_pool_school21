#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
    protected:
        const static int INVENTORY_SIZE = 4;
        int equiped_slots;
        AMateria *inventory[INVENTORY_SIZE];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &obj);

        virtual void learnMateria(AMateria *materia);
        virtual AMateria *createMateria(std::string const &type);
};
#endif
