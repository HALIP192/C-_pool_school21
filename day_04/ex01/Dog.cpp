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

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " is create!" << std::endl;
}

Dog &Dog::operator=(const Dog &a) {
	this->type = a.type;
	this->brain = new Brain(*a.brain);
	return *this;
}

Dog::Dog(const Dog &copy) : Animal() {
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	std::cout << "Copy Constructor " << this->type << std::endl;
}

Dog::~Dog() {
	std::cout << this->type << " is destroy!" << std::endl;
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}

Brain *Dog::getBrain() {
	return brain;
}
