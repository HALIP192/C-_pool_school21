#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type) {
    std::cout << "AMateria " << _type << " is created" << std::endl;
}

AMateria::~AMateria() {}

const std::string &AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "Use AMateria" << target.getName() << std::endl;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    std::cout << "AMateria assign operator called" << std::endl;
    _type = obj._type;
    return *this;
}
