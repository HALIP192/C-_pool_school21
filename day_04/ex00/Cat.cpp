/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:40:44 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:40:49 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
}

Cat::~Cat(void)
{
    std::cout << "Cat was destroyed" << std::endl;
}
                                    
Cat &Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    return *this;
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}
