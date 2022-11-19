/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:41:07 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:46:40 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class   Dog : public Animal
{
public:
    Dog(void);
    Dog(const Dog &obj);
    ~Dog(void);

    virtual void    makeSound(void) const;
    Dog &operator=(const Dog &obj);
};

#endif
