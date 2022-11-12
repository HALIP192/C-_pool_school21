/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:03:08 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 17:07:09 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie a("Jenya");
	Zombie b;
	b = Zombie("Angelo");
	Zombie c(a);
	Zombie *arr = ZombieHorde(10, "Loh");

	for (int i = 0; i < 10;++i)
		arr[i].announce();
	delete[] arr;
	return 0;
}
