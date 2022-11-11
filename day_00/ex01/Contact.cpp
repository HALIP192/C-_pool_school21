#include "Contact.hpp"

Contact::Contact()
{ }

Contact::Contact(const Contact &value)
{
    *this = value;
}

Contact::~Contact()
{ }

Contact &Contact::operator=(const Contact &value)
{
    firstName = value.firstName;
    lastName = value.lastName;
    nickName = value.nickName;
    phoneNumber = value.phoneNumber;
    darkestSecret = value.darkestSecret;
    return (*this);
}

void    dialogMsg(std::istream &in, const std::string &str, std::string &value)
{
    std::cout << str;
    value = "";
    while (value.size() == 0)
        std::getline(in, value);
}

std::istream &operator>>(std::istream &in, Contact &value)
{
    dialogMsg(in, "First name:\n", value.firstName);
    dialogMsg(in, "Last name:\n", value.lastName);
    dialogMsg(in, "NickName:\n", value.nickName);
    dialogMsg(in, "Phone number:\n", value.phoneNumber);
    dialogMsg(in, "Secret:\n", value.darkestSecret);
    return (in);
}

std::ostream &operator<<(std::ostream &out, const Contact &value)
{
    out << "First name: " << value.firstName << std::endl
                << "Last name: " << value.lastName << std::endl
                << "NickName" << value.nickName << std::endl
                << "phoneNumber" << value.phoneNumber << std::endl
                << "Secret: " << value.darkestSecret << std::endl;
    return (out);
}
