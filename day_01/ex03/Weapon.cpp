#include "Weapon.hpp"

Weapon::Weapon(const std::string &value):type(value)
{
	std::cout << "Weapon was created" << std::endl;
}

Weapon::Weapon(const Weapon &obj)
{
	*this = obj;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon was destroied" << std::endl;
}

Weapon &Weapon::operator=(const Weapon &obj)
{
	std::cout << "Weapon was copied" << std::endl;
	type = obj.type;
	return *this;
}

const std::string &Weapon::getType(void) const
{
	return type;
}

void Weapon::setType(const std::string &_type)
{
	type = _type;
}
