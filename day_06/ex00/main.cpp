/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:46:36 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/25 19:51:31 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cstdlib>
#include <climits>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char    *pErr;
        double  dValue = strtod(argv[1], &pErr);
        std::string word(argv[1]);

        if (word == "nan")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl; 
            std::cout << "float: nanf" << std::endl; 
            std::cout << "double: nan" << std::endl; 
        }
        else 
        {
            std::cout.precision(1);
            std::cout.setf(std::ios_base::fixed);
            if (dValue > CHAR_MAX || dValue < 0)
                std::cout << "char: impossible" << std::endl;
            else if (isprint(static_cast<char>(dValue)))
                std::cout << "char: '" << static_cast<char>(dValue) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
            if (dValue > INT_MAX || dValue < INT_MIN)
                std::cout << "int: impossible" << std::endl; 
            else
                std::cout << "int: " << static_cast<int>(dValue) << std::endl; 
            std::cout << "float: " << static_cast<float>(dValue) << "f" << std::endl;
            std::cout << "double: " << dValue << std::endl;
        }
    }
    else
        std::cout << "Error: input ./convert [value]" << std::endl;
    return 0;
}
