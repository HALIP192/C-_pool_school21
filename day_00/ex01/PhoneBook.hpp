#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdexcept>
# include <iostream>
# include <sstream>
# include <iomanip>
# include <stdint.h>

# define PHONEBOOK_SIZE 8

class PhoneBook
{
    private:
        Contact array[PHONEBOOK_SIZE];
        int32_t l;
        int32_t s;
    public:
        PhoneBook();
        PhoneBook(const PhoneBook &value);
        ~PhoneBook();

        PhoneBook       &operator=(const PhoneBook &value);
        const Contact   &operator[](int32_t number);

        void            add(const Contact &value);
        int32_t         getLeftBound(void);
        int32_t         getSize(void);
        const Contact   *getContact(void);
};

std::ostream    &operator<<(std::ostream &out, PhoneBook &value);

#endif
