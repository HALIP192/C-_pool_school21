#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure AMateria was created" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy.getType()) {
    std::cout << "Cure copy constructor was called" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj) {
    this->_type = obj.getType();
    return *this;
}

AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
