#include "Character.hpp"

Character::Character(const Character &copy) : character_name(copy.character_name),
equiped_slots(copy.equiped_slots) {
    for(int i = 0; i < equiped_slots; ++i)
        inventory[i] = copy.inventory[i];
    std::cout << "Character copy constructor was called" << std::endl;
}

Character::Character(const std::string &name): character_name(name),
equiped_slots(0) {
    std::cout << "Character constructor was called" << std::endl;
}

Character::~Character() {
    for(int i = 0; i < INVENTORY_SIZE; ++i)
        delete inventory[i];
}

Character &Character::operator=(const Character &obj) {
    character_name = obj.character_name;
    equiped_slots = obj.equiped_slots;
    for (int i = 0; i < equiped_slots; ++i)
        inventory[i] = obj.inventory[i];
    return *this;
}

const std::string &Character::getName() const {
    return character_name;
}

void Character::equip(AMateria *m) {
    if (equiped_slots < INVENTORY_SIZE) {
        inventory[equiped_slots] = m;
        equiped_slots++;
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < equiped_slots) {
        --equiped_slots;
        for (int i = idx; i < equiped_slots; ++i)
            inventory[i] = inventory[i + 1];
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < equiped_slots) {
        inventory[idx]->use(target);
    }
}
