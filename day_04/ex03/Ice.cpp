#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice AMateria was created" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy.getType()) {
    std::cout << "Ice copy constructor was called" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor was called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj) {
    _type = obj.getType();
    return *this;
}

AMateria *Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
