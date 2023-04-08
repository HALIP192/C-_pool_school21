#include "RPN.hpp"
#include <iostream>
#include <string>

void help() {
	std::cout << "Invalid input" << std::endl;
	std::cout << "./RPN [input string]" << std::endl;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		help();
		return 0;
	}
	RPN(std::string(argv[1]));
	return 0;
}
