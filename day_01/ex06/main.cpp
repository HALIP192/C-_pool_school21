/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:47:14 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/13 17:47:18 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "ERROR: invalid argument" << std::endl;
        return 1;
    }
    for (size_t i = 0; argv[1][i]; ++i)
        argv[1][i] = static_cast<char>(tolower(argv[1][i]));
    Harl    man((std::string(argv[1])));

    man.complain("debug");
    man.complain("info");
    man.complain("warning");
    man.complain("error");
    man.complain("asdf");
    man.complain("");
    return (0);
}
