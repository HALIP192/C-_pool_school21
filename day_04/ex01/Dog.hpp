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
#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class   Dog : public Animal
{
private:
	Brain *brain;
public:
    Dog(void);
    Dog(const Dog &obj);
    ~Dog(void);

    virtual void    makeSound(void) const;
    Dog &operator=(const Dog &obj);

    void setIdea(int num, const std::string &str);
    const std::string &getIdea(int num) const;
};

#endif //Dog_HPP
