#include "Brain.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

#define NUM_OF_ANIMAL 4

int main()
{
	Animal	*animals[NUM_OF_ANIMAL];
	Brain	*brain;

	for (int i = 0; i < NUM_OF_ANIMAL; ++i)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	brain = animals[0]->getBrain();
	brain->ideas[99] = "IDEYA";
	std::cout << brain->ideas[0] << '\n'
			  << brain->ideas[22] << '\n'
			  << animals[0]->getBrain()->ideas[99] << std::endl
			  << animals[2]->getBrain()->ideas[99] << std::endl;
	for (int i = 0; i < NUM_OF_ANIMAL; ++i)
		delete animals[i];
}
