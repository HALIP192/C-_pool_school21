/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:51:47 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/19 19:00:38 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_BRAIN_H
#define CPP_BRAIN_H

#include <string>
#include <sstream>
#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &a);
	virtual	~Brain();

	std::string	ideas[100];
};


#endif //CPP_BRAIN_H
