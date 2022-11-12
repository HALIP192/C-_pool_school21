/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:01:09 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 17:09:57 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
	Zombie *arr = new Zombie[N];

	for (int i = 0; i < N; ++i)
		arr[i].setName(name);
	return arr;
}
