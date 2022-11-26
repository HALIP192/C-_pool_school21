/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:46:36 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/26 14:39:09 by ntitan           ###   ########.fr       */
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

        if (word == "nan" || word == "nanf")
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
            if (word.size() == 1 && ((word[0] >= 32 && word[0] < 48) || 
										 (word[0] > 57 && word[0] < 127))) {

                std::cout << "char: '" << word << "'" << std::endl;
                std::cout << "int: " << static_cast<int>(word[0]) << std::endl; 
            	std::cout << "float: " << static_cast<float>(word[0]) << "f" << std::endl;
            	std::cout << "double: " << static_cast<double>(word[0]) << std::endl;
			} else {
				if (dValue > CHAR_MAX || dValue < 0)
					std::cout << "char: impossible" << std::endl;
				else if (isprint(static_cast<char>(dValue)))
					std::cout << "char: \'" << static_cast<char>(dValue) << "\'" << std::endl;
				else
					std::cout << "char: Non displayable" << std::endl;
            	if (dValue > INT_MAX || dValue < INT_MIN)
                std::cout << "int: impossible" << std::endl; 
            	else
					std::cout << "int: " << static_cast<int>(dValue) << std::endl;
				std::cout << "float: " << static_cast<float>(dValue) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(dValue) << std::endl;
			}
        }
    }
    else
        std::cout << "Error: input ./convert [value]" << std::endl;
    return 0;
}
