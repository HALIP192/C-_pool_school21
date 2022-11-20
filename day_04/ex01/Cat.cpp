/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:40:44 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:03:40 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
    brain = NULL;
}

Cat::~Cat(void)
{
    std::cout << "Cat was destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    if (brain == NULL)
        brain = new Brain();
    brain = (obj.brain);
    return *this;
}

void Cat::setIdea(int num, const std::string &str)
{
    if (num < 0 || num >= BRAIN_SIZE)
        return ;
    brain->ideas[num] = str;
}

const std::string  &Cat::getIdea(int num) const
{
//std::cout << "LOL\n";
    return brain->ideas[num % BRAIN_SIZE];
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}
