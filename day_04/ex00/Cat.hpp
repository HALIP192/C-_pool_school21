/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:38:59 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:39:06 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class   Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat &obj);
    ~Cat(void);

    virtual void    makeSound(void) const;
    Cat &operator=(const Cat &obj);
};

#endif //CAT_HPP
