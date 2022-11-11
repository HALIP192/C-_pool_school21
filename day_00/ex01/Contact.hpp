#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

# define INPUT_DEFINE(out, value) \
        std::cout << out << std::endl; \
        std::cin >> value;

class Contact
{
    public:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

        Contact();
        Contact(const Contact &value);
        ~Contact();

        Contact &operator=(const Contact &value);
};

std::ostream    &operator<<(std::ostream &out, const Contact &value);
std::istream    &operator>>(std::istream &in, Contact &value);
void            dialogMsg(std::istream &in, const std::string &str,
                          std::string &value);

#endif
