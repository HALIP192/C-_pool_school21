/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:58:22 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 18:25:26 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	private:
		Weapon	*weapon;
		std::string name;

		HumanB(void);
		HumanB(const HumanB &obj);
		HumanB &operator=(const HumanB &obj);
	public:
		HumanB(const std::string &_name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &_weapon);
};

#endif
