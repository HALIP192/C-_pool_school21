/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zoombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:43:51 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 16:36:27 by ntitan           ###   ########.fr       */
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

		Zombie();
		Zombie(const Zombie &value);
	public:
		Zombie(const std::string &_name);
		~Zombie(void);
		Zombie &operator=(const Zombie &value);

		void announce(void) const;
};

Zombie *newZombie(std::string);
void	randomChump(std::string name);

#endif
