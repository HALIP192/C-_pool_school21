#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): equiped_slots(0) {
    for (int i = 0; i < INVENTORY_SIZE; ++i)
        this->inventory[i] = NULL;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy):
equiped_slots(copy.equiped_slots) {
    for (int i = 0; i < equiped_slots; ++i)
        inventory[i] = copy.inventory[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < equiped_slots; ++i)
        delete inventory[i];
}

void MateriaSource::learnMateria(AMateria *materia) {
    if (equiped_slots < INVENTORY_SIZE) {
        if (equiped_slots == 0) {
            inventory[equiped_slots++] = materia;
            return ;
        }
        for (int i = 0; i < equiped_slots; ++i)
            if (inventory[i]->getType() != materia->getType()) {
                inventory[equiped_slots++] = materia;
                return ;
            }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < equiped_slots; ++i) {
        if (inventory[i]->getType() == type)
            return inventory[i]->clone();
    }
    return NULL;
}
