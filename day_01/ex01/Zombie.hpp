/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zoombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:43:51 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 17:02:58 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(const Zombie &value);
		Zombie(const std::string &_name);

		~Zombie(void);
		Zombie &operator=(const Zombie &value);

		void announce(void) const;
		void setName(const std::string &value);
};

Zombie *ZombieHorde(int N, std::string name);

#endif
