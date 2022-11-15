#ifndef FIXED_HPP
# define FIXED_HPP

# define WIDTH_FLOAT_PARTH 8
# define BIN_WIDTH_FLOAT_PARTH 0xff

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int value;
    static int widthFloatParth;
public:
    Fixed(void);
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &obj);
    ~Fixed(void);

    Fixed &operator=(const Fixed &obj);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
