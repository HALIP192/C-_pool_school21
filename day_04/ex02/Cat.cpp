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

Cat::Cat() {
	this->type = "Cat";
	brain = new Brain();
	std::cout << this->type << " is create!" << std::endl;
}

Cat &Cat::operator=(const Cat &a) {
	this->type = a.type;
	this->brain = new Brain(*a.brain);
	return *this;
}

Cat::Cat(const Cat &copy) : Animal() {
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy Constructor " << this->type << std::endl;
}

Cat::~Cat() {
	std::cout << this->type << " is destroy!" << std::endl;
	delete brain;
}

void Cat::makeSound() const {
	std::cout << "Meoow.." << std::endl;
}

Brain *Cat::getBrain() const {
	return brain;
}

Animal &Cat::operator=(const Animal &a) {
    std::cout << "Animal Assign" << std::endl;
    this->type = a.getType();
    *(this->brain) = *(a.getBrain());
    return *this;
}
