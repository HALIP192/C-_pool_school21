/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:46:58 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 18:25:11 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
private:
	const Weapon	&weapon;
	std::string name;

	HumanA(void);
	HumanA(const HumanA &obj);
	HumanA &operator=(const HumanA &obj);
public:
	HumanA(const std::string &_name, const Weapon &_weapon);
	~HumanA(void);

	void attack(void);
};

#endif
