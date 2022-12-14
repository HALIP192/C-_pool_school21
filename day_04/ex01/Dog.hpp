/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:38:59 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:02:22 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "Animal.hpp"

class Dog : public Animal {
private:
	Brain	*brain;
public:
	Dog();
	Dog &operator=(const Dog &a);
	Dog(const Dog &copy);
	~Dog();

	void	makeSound() const;
	virtual	Brain *getBrain();
};


#endif //CPP_DOG_H
