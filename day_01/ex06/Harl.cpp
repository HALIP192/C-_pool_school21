#include "Harl.hpp"

Harl::Harl(const std::string &str)
{
    unsigned char           minimum = hash(str);

    for (int i = 0; i < BUF_SIZE; ++i)
        funcs[i] = &Harl::something;
    switch (minimum)
    {
        case (44): funcs[44] = &Harl::debug;
        case (220): funcs[220] = &Harl::info;
        case (247): funcs[247] = &Harl::warning;
        case (141): funcs[141] = &Harl::error; break;
        default:    std::cerr << "Error: invalid argument" << std::endl; break;
    }
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::something(void)
{ }

unsigned char   Harl::hash(const std::string &str)
{
	static unsigned char perm_table[] = {
       164, 232,  46, 116, 224, 182, 133, 185,  74, 147, 219, 135,  78,
       104,  58,  30, 115,   3,  57, 239, 252, 171, 118, 180, 253, 196,
        84,   0, 201,  73,  42,  70, 244, 197, 131, 172,  62, 157, 233,
       246, 113, 241, 136, 107,  66,  38, 220,  37,  61,  53,  52,  89,
       222, 161,  41, 103,  69, 110, 121, 153, 167,  96,  92, 132,  49,
       142,  82, 203,  21, 151, 111, 245, 144, 191, 156, 130,  87,  24,
        16, 238,  27, 148,  33, 168,  20, 187, 137,  55, 174, 229, 208,
       123, 146, 254,  65,  95,  51, 234,  97, 158,  63,  17,  29,  93,
       108,  47,   5, 125, 214, 143, 193, 178,   6, 230, 205,  68,  40,
       188, 204,  48, 243, 207, 117,   4, 221, 141,   9,   7, 122, 213,
         8, 198,  75, 162, 184,  83, 240, 112, 152, 101,  54, 102, 166,
       177, 149,  94, 150,  77,  15,  81, 183,  60, 159, 173,  12,  19,
        23, 195,  11, 223, 154, 215,  13, 237, 181, 212,  88, 228,  59,
       134,  64, 250,  28, 129, 202, 248, 206, 190,  25,  18, 186, 176,
       216, 200,  35,  71,  36, 235, 126, 225,  32,  98, 242,  22,  79,
       114,  99,  67, 165, 160, 170,  91, 236, 100, 124, 192,  43, 217,
       163, 249, 210, 155, 169, 247,   2,  76, 231, 255, 218,  45,  14,
       226, 175,  10,  39,  56, 138, 140, 127, 106, 109, 145, 209, 211,
        90,   1,  44, 128, 139,  86,  26, 194,  34,  80,  85,  31, 120,
       105, 227, 119, 179, 199, 251,  50,  72, 189
	};
	unsigned char   hs = static_cast<unsigned char>(str.size());

	for (size_t i = 0; i < str.size(); ++i)
		hs = perm_table[hs ^ str[i]];
	return hs;
}

void    Harl::complain(std::string level)
{
    (this->*funcs[hash(level)])();
}
