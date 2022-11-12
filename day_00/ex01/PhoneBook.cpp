#include "PhoneBook.hpp"
#include "Contact.hpp"
PhoneBook::PhoneBook()
: l(0), s(0)
{ }

PhoneBook::PhoneBook(const PhoneBook &value)
{
    *this = value;
}

PhoneBook::~PhoneBook()
{ }

PhoneBook   &PhoneBook::operator=(const PhoneBook &value)
{
    l = value.l;
    s = value.s;

    for (int32_t i = 0; i < PHONEBOOK_SIZE; ++i)
        array[i] = value.array[i];
    return (*this);
}

const Contact &PhoneBook::operator[](int32_t number)
{
    if (number < 0 || number >= PHONEBOOK_SIZE || number >= s)
        throw std::runtime_error("Invalid index");
    return (array[(number)]);
}

void PhoneBook::add(const Contact &value)
{
    if (s < 8)
    {
        array[l + s] = value;
        ++s;
    }
    else
    {
        array[(l + s) % PHONEBOOK_SIZE] = value;
        l = (l + 1) % PHONEBOOK_SIZE;
    }
}

int32_t PhoneBook::getLeftBound(void)
{
    return (l);
}

int32_t PhoneBook::getSize(void)
{
    return (s);
}

const Contact *PhoneBook::getContact(void)
{
    return (array);
}

static std::string outputPipe(void)
{
    return ("║");
}

static const std::string    outputMsg(const std::string &value)
{
    std::stringstream   str;

    if (value.size() <= 10)
        str << std::setw(10) << std::setiosflags(std::ios_base::right) << value;
    else
        str << value.substr(0, 9) << '.';
    return (str.str());
}

std::ostream &operator<<(std::ostream &out, PhoneBook &value)
{
    const Contact   *ptr = value.getContact();
//    int32_t         left = value.getLeftBound();
    int32_t         size = value.getSize();
    int32_t         index;

    out << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
    out << outputPipe() << outputMsg("index") << outputPipe()
		<< outputMsg("first name") << outputPipe()
		<< outputMsg("last name") << outputPipe()
		<< outputMsg("nickname") << outputPipe() << std::endl;
    out << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
    for (int32_t i = 0; i < size; ++i)
    {
        index = i;
        out << outputPipe() << outputMsg(std::string() + static_cast<char>('0' + i))
            << outputPipe() << outputMsg(ptr[index].firstName) << outputPipe()
            << outputMsg(ptr[index].lastName) << outputPipe()
            << outputMsg(ptr[index].nickName) << outputPipe() << std::endl;
        if (i != size - 1)
            out << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
    }
        out << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
        return out;
}
