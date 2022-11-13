#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl was Created" << std::endl;
	for(int i = 0; i < BUF_SIZE; ++i)
		func[i] = &Harl::something;
	func[hash("debug")] = &Harl::debug;
	func[hash("info")] = &Harl::info;
	func[hash("warning")] = &Harl::warning;
	func[hash("error")] = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "Harl was destroied" << std::endl;
}
