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
	Animal &operator=(const Animal &a);
	virtual ~Animal();

	const std::string	&getType() const;
	virtual void	makeSound() const;
	virtual	Brain	*getBrain() = 0;
};


#endif //CPP_ANIMAL_H
