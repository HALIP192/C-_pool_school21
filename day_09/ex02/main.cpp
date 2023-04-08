#include <iostream>
#include <string>
#include <sstream>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 3) {
		std::cout << "Input is invalid. Stop." << std::endl;
		std::cout << "./PmergeMe [num1 num2..]" << std::endl;
		return 0;
	}
	PmergeMe(argc, argv);
	return 0;
}
