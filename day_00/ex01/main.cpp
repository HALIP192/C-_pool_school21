#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    std::string keyWord;
    PhoneBook   book;
    Contact     people;
    int32_t     number;

    while (1)
    {
        try
        {
            std::cout << "Input command:" << std::endl;
            std::cin >> keyWord;
            std::cin.ignore();
            if (keyWord == "ADD")
            {
                std::cin >> people;
                book.add(people);
            }
            else if (keyWord == "SEARCH")
            {
                std::stringstream   line;
                std::cout << book;
                dialogMsg(std::cin, "Input index people:", keyWord);
                line << keyWord;
                line >> number;
                if (line.fail() || !line.eof())
                    throw std::runtime_error("Invalid line");
                std::cout << book[number];
            }
            else if (keyWord == "EXIT")
                break ;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}
