#include <iostream>
#include <string>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else
    {
        std::string str;
        for (int i = 1; i < argc; ++i) {
            for (size_t j = 0 ; j < std::string(argv[i]).size(); ++j) {
                str += std::toupper(argv[i][j]);
            }
        }
        std::cout << str << std::endl;
    }
    return 0;
}
