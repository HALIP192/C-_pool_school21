/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:40:44 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:03:40 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
    brain = NULL;
}

Dog::~Dog(void)
{
    std::cout << "Dog was destroyed" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    if (brain == NULL)
        brain = new Brain();
    *brain = *(obj.brain);
    return *this;
}

void Dog::setIdea(int num, const std::string &str)
{
    std::cout << __func__ << std::endl;
    if (num < 0 || num >= BRAIN_SIZE)
        return ;
    std::cout << num << std::endl;
    brain->ideas[num] = str;
}

const std::string  &Dog::getIdea(int num) const
{
//std::cout << "LOL\n";
    if (num >= BRAIN_SIZE)
        num %= BRAIN_SIZE;
    std::cout << num << std::endl;
    if (brain == NULL)
        std::cout << "rofl\n";
    return brain->ideas[num];
}

void    Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}
