/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:38:45 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:38:47 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal is create!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal is destroy!" << std::endl;
}

Animal &Animal::operator=(const Animal &a) {
	this->type = a.type;
	return *this;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "Copy Constructor " << this->type << std::endl;
}

const std::string &Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "What say Animal?" << std::endl;
}
