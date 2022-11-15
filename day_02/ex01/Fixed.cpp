#include "Fixed.hpp"

int Fixed::widthFloatParth = WIDTH_FLOAT_PARTH;

Fixed::Fixed(void)
: value(0)
{
    std::cout << "Default constructor called" << std::endl;
} 

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    value = 0;
    value = val << WIDTH_FLOAT_PARTH;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    float   res = val - floorf(val);

    value = 0;
    value = static_cast<int>(val) << WIDTH_FLOAT_PARTH;
    res = roundf(res * 100);
    value += static_cast<int>(res) & BIN_WIDTH_FLOAT_PARTH;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = obj.value;
    return *this;
}

int     Fixed::getRawBits(void) const
{
    return value;
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
}

float   Fixed::toFloat(void) const
{
    return static_cast<float>(value >> WIDTH_FLOAT_PARTH) + static_cast<float>(value & BIN_WIDTH_FLOAT_PARTH) / 100;
}

int Fixed::toInt(void) const
{
    return (value >> WIDTH_FLOAT_PARTH);
}

std::ostream &operator<<(std::ostream& out, const Fixed &value)
{
    out << value.toFloat();
    return out;
}
