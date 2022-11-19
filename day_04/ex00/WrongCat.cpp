/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:43:29 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:43:31 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat was destroyed" << std::endl;
}
                                    
WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    WrongAnimal::operator=(obj);
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;

}
