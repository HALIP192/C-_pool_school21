/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:46:38 by ntitan            #+#    #+#             */
/*   Updated: 2022/11/12 18:25:38 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(const std::string &_name, const Weapon &_weapon):weapon(_weapon), name(_name)
{
	std::cout << "HumanA was Created" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA was destroied" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << name << "atack with their" << weapon.getType() << std::endl;
}
