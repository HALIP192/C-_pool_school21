/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:41:12 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:46:12 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog::~Dog(void)
{
    std::cout << "Dog was destroyed" << std::endl;
}
                                
Dog &Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    return *this;
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}
