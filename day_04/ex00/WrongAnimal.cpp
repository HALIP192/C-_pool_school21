/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:42:29 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:42:31 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
: type("WrongAnimal")
{
    std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal was destroyed" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << type + " -> " + obj.type << std::endl;
    type = obj.type;
    return *this;
}
                                       
void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
    return type;
}
