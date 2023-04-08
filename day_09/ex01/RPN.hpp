#include <string>
#include <stack>
#include <iostream>

class RPN {
	private:
		std::stack<long> mas;
	public:
		RPN(std::string const &str);
		~RPN();
		int is_valid_num(std::string const &str);
		int is_valid_op(std::string const &str);
};
