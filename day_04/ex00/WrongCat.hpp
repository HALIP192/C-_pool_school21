/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:45:10 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 18:45:17 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class   WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(const WrongCat &obj);
    ~WrongCat(void);

    virtual void    makeSound(void) const;
    WrongCat &operator=(const WrongCat &obj);
};

#endif //WrongWRONGCAT_HPP
