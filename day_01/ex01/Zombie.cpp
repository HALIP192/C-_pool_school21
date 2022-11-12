#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie <no name> was created" << std::endl;
}

Zombie::Zombie(const Zombie &obj)
{
	*this = obj;
}

Zombie::Zombie(const std::string &_name):name(_name)
{
	std::cout << "Zombie " << name << " was created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": destroy" << std::endl;
}

Zombie &Zombie::operator=(const Zombie &obj)
{
	std::cout << "Zombie was copied" << std::endl;
	name = obj.name;
	return *this;
}

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &value)
{
	name = value;
}
