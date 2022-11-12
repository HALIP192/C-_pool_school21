/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:03:21 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 16:38:17 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	a("Jenya");
	Zombie	*b = newZombie("Lesha");
	
	randomChump("Kostya");
	b->announce();
	a.announce();
	delete b;
	return (0);
}
