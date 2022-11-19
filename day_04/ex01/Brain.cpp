#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain was created" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
}

Brain::~Brain(void)
{
	std::cout << "Brain was destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &obj);
{
	for (int i = 0; i < BRAIN_SIZE; ++i)
	{
		ideas[i] = obj.ideas[i];
	}
	return *this;
}
