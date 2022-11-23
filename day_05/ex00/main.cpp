#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat  a("Bob", 2);
        Bureaucrat  b("Lesha", 149);
        Bureaucrat  c = a;

        std::cout << a << std::endl;
        for (int i = 0; i < 2; ++i)
        {
            /* a.incGrade(); */
            std::cout << a << std::endl;
        }
        std::cout << b << std::endl;
        for (int i = 0; i < 2; ++i)
        {
            /* b.decGrade(); */
            std::cout << b << std::endl;
        }
        std::cout << c << std::endl;
        /* Bureaucrat   d("Emely", 1000); */
        /* Bureaucrat  e("Lesha", -1); */
        /* Bureaucrat  b; */
        /* a = c; */
    }
    catch (std::exception *a)
    {
        a->what();
    }
    return 0;
}
