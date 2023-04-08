#include "RPN.hpp"
#include <sstream>
#include <cstdlib>

RPN::RPN(std::string const &str) {
	std::string pars;
	std::stringstream s(str);
	while (std::getline(s, pars, ' ')){
		if (is_valid_num(pars)) {
			mas.push(atol(pars.c_str()));
		} else if (is_valid_op(pars)) {
			if (mas.size() < 2) {
				std::cout << "Ivalid RPN. Stop." << std::endl;
				return;
			} else {
				if (pars == "*") {
					long f = mas.top();
					mas.pop();
					long s = mas.top();
					mas.pop();
					long num = s * f;
					mas.push(num);
				} else if (pars == "/") {
					long f = mas.top();
					mas.pop();
					long s = mas.top();
					mas.pop();
					long num = s / f;
					mas.push(num);
				} else if (pars == "+") {
					long f = mas.top();
					mas.pop();
					long s = mas.top();
					mas.pop();
					long num = s + f;
					mas.push(num);
				} else if (pars == "-") {
					long f = mas.top();
					mas.pop();
					long s = mas.top();
					mas.pop();
					long num = s - f;
					mas.push(num);
				}
			}
		}
	}
	if (mas.size() > 1) {
		std::cout << "Invalid RPN. Stop." << std::endl;
	} else {
		std::cout << mas.top() << std::endl;
	}
}

int RPN::is_valid_num(std::string const &str)
{
	for (long unsigned int i = 0; i < str.size(); ++i) {
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	return 1;
}

int RPN::is_valid_op(std::string const &str) {
	if (str.size() > 1)
		return 0;
	if (str == "/" || str == "*" || str == "+" || str == "-")
		return 1;
	return 0;
}

RPN::~RPN() {}
