/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:20:55 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 17:35:09 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string type;
		Weapon(void);
	public:
		Weapon(const std::string &value);
		Weapon(const Weapon &obj);
		~Weapon(void);
		Weapon &operator=(const Weapon &obj);

		const	std::string &getType(void) const;
		void	setType(const std::string &_type);
};

#endif
