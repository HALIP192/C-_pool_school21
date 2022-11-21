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
	virtual ~Cat();

	virtual void	makeSound() const;
	virtual	Brain *getBrain() const;
    virtual Animal &operator=(Animal const &a);
};


#endif //CPP_CAT_H

