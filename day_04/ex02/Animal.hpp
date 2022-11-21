/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:36:52 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:01:48 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal &copy);

	virtual Animal &operator=(const Animal &a) = 0;
	virtual ~Animal() = 0;

	const std::string	&getType() const;
	virtual void	makeSound() const = 0;
	virtual	Brain	*getBrain() const = 0;
};


#endif //CPP_ANIMAL_H
