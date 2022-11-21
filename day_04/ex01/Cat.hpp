/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:38:59 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:02:22 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CPP_CAT_H
#define CPP_CAT_H

#include "Animal.hpp"

class Cat: public Animal {
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &copy);
	Cat	&operator=(const Cat &a);
	~Cat();

	void	makeSound() const;
	virtual	Brain *getBrain();
};


#endif //CPP_CAT_H

